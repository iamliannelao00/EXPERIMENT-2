#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int n, x, sum = 0;
	
		do
		{
			cout << "Enter a number: ";
			cin >> n; 

		if (n>=1)
		{
			for ( x = 1; x <= n; x++)
			sum += x;
			{ 
				cout << "The sum of all whole numbers from  1 to " << n << " is " << sum << "\n \n" << endl;
			}		
		}	
		}
		while (n>0);
		{
			cout << "Thank You!";
		}

		

_getch ();
return 0;
}