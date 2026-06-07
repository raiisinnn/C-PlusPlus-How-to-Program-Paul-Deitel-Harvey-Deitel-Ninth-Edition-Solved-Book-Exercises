/*6.58 (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments
is student fatigue. This can be reduced by varying the computer’s responses to hold the student’s
attention. Modify the program of Exercise 6.57 so that various comments are displayed for
each answer as follows:
Possible responses to a correct answer:
Very good!
Excellent!
Nice work!
Keep up the good work!
Possible responses to an incorrect answer:
No. Please try again.
Wrong. Try once more.
Don't give up!
No. Keep trying.
Use random-number generation to choose a number from 1 to 4 that will be used to select
one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
issue the responses.*/

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

void question() {
    int num1=rand()%10; 
    int num2=rand()%10; 
    cout<<"How much is "<<num1<<" times "<<num2<<"?"<<endl;
    int correct_answer=num1*num2;
    int player_answer;

    while (true) {
        cin>>player_answer;
        if(player_answer==correct_answer) {
            int response= rand() % 4;
            switch (response) {
                case 0: cout<<"Very good!"; break;
                case 1: cout<<"Excellent!"; break;
                case 2: cout<<"Nice work!"; break;
                case 3: cout<<"Keep up the good work!"; break;
            }
            break;
        } else {
            
            int response=rand() % 4;
            switch (response) {
                case 0: cout<<"No! Please try again."; break;
                case 1: cout<<"Wrong! Try once more."; break;
                case 2: cout<<"Don't give up!"; break;
                case 3: cout<<"No! Keep trying."; break;
            }
        }
    }
}

int main() {
    srand(time(0));

    question();

    while (true) {
        question();
    }

    return 0;
}
