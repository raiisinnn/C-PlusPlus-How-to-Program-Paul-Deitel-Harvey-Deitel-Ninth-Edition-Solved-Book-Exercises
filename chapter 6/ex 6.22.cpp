/*6.22 (Square of Asterisks) Write a function that displays at the left margin of the screen a solid
square of asterisks whose side is specified in integer parameter side. For example, if side is 4, the
function displays the following:
****
****
****
****
*/
#include <iostream>

using namespace std;

void square(int a) {
    for(int i=0;i<a;i++)
		{
      for(int j=0;j<a;j++)
			{
        cout<<'*';
      }
       cout<<endl;
    }
}

int main()
{
  square(4);

  return 0;
}
