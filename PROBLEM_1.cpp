#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	char package;
	int hours;
	double x = 995;
	double y = 1495;
	
	cout << "Enter Package Purchased: " ;
	cin >> package;
	cout << "Enter Hours Used: " ;
	cin >> hours; cout << " \n \n" << setprecision (2) << fixed;
	
	
	switch (package)
	{
	case 'a':
	case 'A':
	
		if (hours <= 10)
		
			cout << "Total Amount Due: P 995.00"<< endl;
		else
		
			cout << "Total Amount Due: P " << (x + (20*(hours-10))) << "" << setprecision (2) << fixed <<endl;			
	
	break;

	case 'b':
	case 'B':
	if (hours <= 20)
		
			cout << "Total Amount Due: P 1,495.00"<< endl;
		else
		
			cout << "Total Amount Due: P " << (y + (10*(hours-20))) << "" << setprecision (2) << fixed << endl;			
	break;

	case 'c':
	case 'C':
		cout << "Total Amount Due: P 1,995.00" << endl;
	break;

	default: 
		cout << "Invalid Package" << endl;
	}

_getch();
return 0;
}
