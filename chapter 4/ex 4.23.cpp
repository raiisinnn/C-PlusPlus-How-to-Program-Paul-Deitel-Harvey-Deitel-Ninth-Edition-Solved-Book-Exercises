
//a)
if (x < 10)
	if (y > 10)
		cout << "*****" << endl;
	else
		cout << "#####" << endl;
cout << "$$$$$" << endl;

/* Answers:
1. x = 9, y = 11
	*****
	$$$$$

2. x = 11, y = 9
	$$$$$
*/

//b)
if (x < 10)
{
	if (y > 10)
		cout << "*****" << endl;
}
else
{
	cout << "#####" << endl;
	cout << "$$$$$" << endl;
}

/* Answers:
1. x = 9, y = 11
	*****

2. x = 11, y = 9
	#####
	$$$$$
*/
