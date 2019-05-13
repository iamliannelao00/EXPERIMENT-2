#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int i;
	
	cout << "Counting... \n \n";
	
	for (i=0; i<=10; i++)
	{
		// Display number 1 to 10 in one line separated with ','
		cout << i << "," ;
	}
	
	i=12;
	while (i<30)
	{
		// Display number 12 to 30 in one line
		cout << i << "," ;
		i+=2;
	}
	while (i=30)
	{
		// Display number 30 in one line
		cout << i << "" ;
		break;
	}
	
_getch();
return 0;
}
