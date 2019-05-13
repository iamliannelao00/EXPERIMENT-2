#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int consumption;
	double balance;
	
	cout << "What is the current consumption in gallons?  \t" ;
	cin >> consumption;
	cout << "\n" << setprecision (2) << fixed ;

	cout << "Enter unpaid balance:\t\t\t\t " ;
	cin >> balance;
	cout << "\n" << setprecision (2) << fixed ;
	

				if (balance > 0)
				cout << "Water Bill:   \t \t \t \t \t P" << ((35 + (consumption * 1.10))+ 20) << setprecision (2) << fixed << endl;
				
				else
				 
				cout << "Water Bill:   \t \t \t \t \t P" << (35 + (consumption *1.10)) << setprecision (2) << fixed << endl;
	
	
	
	
	
_getch();
return 0;
}
