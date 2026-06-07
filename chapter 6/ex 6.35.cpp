/*6.35 (Guess-the-Number Game Modification) Modify the program of Exercise 6.34 to count the
number of guesses the player makes. If the number is 10 or fewer, print "Either you know the secret
or you got lucky!" If the player guesses the number in 10 tries, then print "Ahah! You know
the secret!" If the player makes more than 10 guesses, then print "You should be able to do
better!" Why should it take no more than 10 guesses? Well, with each “good guess” the player
should be able to eliminate half of the numbers. Now show why any number from 1 to 1000 can
be guessed in 10 or fewer tries.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_num()
{
	return(rand()%1000 + 1);
}

int main()
{
	int guess;
	int num;
	char playagain;
	srand(time(0));
	do {
		int count=0;
		num=rand_num();
		cout<<"I have a number between 1 and 1000.\nCan you guess my number"<<endl;
		cout<<"Please type your first guess."<<endl;
		cin>>guess;
		while(guess!=num)
		{
			count++;
			if (guess<num)
				cout<<"Too low. Try again."<<endl;
			else
				cout<<"Too high. Try again."<<endl;
			cin>>guess;
		}
		cout << "Excellent! You guessed the number!"<<endl;
		if(count<10)
			cout<<"Either you know the secret or you got lucky!"<<endl;
		else if(count==10)
			cout<<"Ahah! You know the secret!"<<endl;
		else
			cout<<"You should be able to do better!"<<endl;
		cout<<"Would you like to play again (y or n)?"<<endl;
		cin >> playagain;
	} while (playagain!='n');
}
