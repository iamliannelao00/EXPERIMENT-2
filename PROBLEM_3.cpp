#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int x,y;
	const double z = 2.5;
	
	cout << "Enter the value of x: " ;
	cin >> x;
	cout << "Enter the value of y: " ;
	cin >> y; cout << " \n \n" << setprecision (2) << fixed;
	
	switch (x)
	{
	case 1:
	
		if (y >= 1)
		
			cout << "V = " << (x * y * 2.5) << "" << setprecision (2) << fixed <<endl;			
	
		else if(y >= 5)
		
			cout << "V = " << (x + (y / 2.5)) << "" << setprecision (2) << fixed <<endl;	
		else
			cout << "Your entered an invalid number" << endl;
	break;

	case 2:
	if (y <= 5)
		
			cout << "V = "<< abs((x - y) / 2.5) << "" << setprecision (2) << fixed << endl;
	
	else 
		
			cout << "V = " << (x - (sqrt(y + 2.5))) << "" << setprecision (2) << fixed << endl;	
	
	break;

	default:
	cout << "V = " << x + y + 2.5 << "" << setprecision (2) << fixed << endl;

	}
		

_getch();
return 0;
}
