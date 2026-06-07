/* 6.23 ne fund te kapitullit
6.23 (Square of Any Character) Modify the function created in Exercise 6.22 to form the square
out of whatever character is contained in character parameter fillCharacter. Thus, if side is 5 and
fillCharacter is #, then this function should print the following:
#####
#####
#####
#####
#####
*/

#include <iostream>

using namespace std;

void square(int a, char fillCharacter)
{
    for(int i=0;i< a;i++)
		{
      for(int j=0;j<a;j++) {
          cout<<fillCharacter;
        }
        cout << std::endl;
    }
}

int main() {
    
    square(5, '#');

    return 0;
}
