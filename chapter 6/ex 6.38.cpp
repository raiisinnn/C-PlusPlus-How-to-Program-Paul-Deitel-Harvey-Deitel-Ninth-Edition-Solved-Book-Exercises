//U. 6.38 (Towers of Hanoi)

#include <iostream>

using namespace std;

//n- varjabel per numrin e rratheve
void hanoi(int n,int initialPeg,int finalPeg,int tempPeg)
{
	if (n==1)
	{
		cout<<initialPeg<< " --> "<<finalPeg<<endl;
	}
	else
	{
		hanoi(n- 1,initialPeg,tempPeg,finalPeg);
		cout<<initialPeg<<" --> "<<finalPeg<<endl;
		hanoi(n-1,tempPeg,finalPeg,initialPeg);
	}
}

int main()
{
	int n;
	cout<<"This program will solve Towers of Hanoi problem recursively"<<endl;
	cout<<"Enter number of disks: ";
	cin>>n;
	hanoi(n, 1, 3, 2);
}
