(Order of Evaluation)
State the order of evaluation of the operators in each of the following C++ statements and show the value of x after each statement is performed.

a) x = 7 + 3 * 6 / 2 - 1;
First, multiplication is performed (3 * 6), then division, and finally addition and subtraction.
This order of operations leads us to the result: x = 15.

b) x = 2 % 2 + 2 * 2 - 2 / 2;
First, multiplication is performed (2 * 2), then division (2 / 2), then the modulus (2 % 2), and finally addition and subtraction.
This order of operations leads us to the result: x = 3.

c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );
First, the multiplications inside the parentheses are performed (3 * 9) and (9 * 3), then the division (27 / 3), followed by the addition inside the parentheses (3 + 9), and finally the outer multiplication (27 * 12).
This order of operations leads us to the result: x = 324.


///CODE VER///


#include <iostream>

using namespace std;
int main ()
{
	int x = 7 + 3 * 6 / 2 - 1;
	cout<<x<<endl;
	int y = 2 % 2 + 2 * 2 - 2 / 2;
	cout<<y<<endl;
	int z = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );
	cout<<z<<endl;

 return 0;
}
