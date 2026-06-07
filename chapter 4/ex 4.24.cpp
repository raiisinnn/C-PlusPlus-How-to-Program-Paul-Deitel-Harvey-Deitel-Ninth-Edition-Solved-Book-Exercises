#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = 8;
// a
	if (y == 8 )
		if (x == 5 )
			cout << "@@@@@" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;
	cout << endl;
	
// b
	if (y == 8 )
	{
		if (x == 5 )
			cout << "@@@@@" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
		cout << "&&&&&" << endl;
	};
	cout << endl;

// c
	if (y == 8 )
		if (x == 5 )
			cout << "@@@@@" << endl;
		else
		{
			cout << "#####" << endl;
			cout << "$$$$$" << endl;
		}
	cout << "&&&&&" << endl;
	cout << endl;
	
// d)
	y =7;
	if (y == 8 )
	{
		if (x == 5 )
			cout << "@@@@@" << endl;
	}
	else
		cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;

}
