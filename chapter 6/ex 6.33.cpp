/*6.33 (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin, the program
should print Heads or Tails. Let the program toss the coin 100 times and count the number of
times each side of the coin appears. Print the results. The program should call a separate function flip
that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program realistically simulates
the coin tossing, then each side of the coin should appear approximately half the time.]*/

#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

// 0 for Tails, 1 for Heads
int flip()
{
    return rand() % 2; 
}

int main() {
    
    srand(time(0));

    int heads_count=0;
    int tails_count=0;

    for (int i=0;i<100;i++)
		{
        int result = flip();

        if(result==0) {
            cout<<"Tails";
            tails_count++;
        } else {
            cout<<"Heads";
            heads_count++;
        }
        
        if ((i + 1)) {
            cout<<"  ";
        }
    }
    
    cout<<endl;

    cout<<"Number of Heads: "<<heads_count<<endl;
    cout<<"Number of Tails: "<<tails_count<<endl;

    return 0;
}
