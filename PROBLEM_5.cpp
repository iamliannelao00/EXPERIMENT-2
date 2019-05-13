#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int x, n , y, z;
	
	x = 0;
	y = 1;
	z = 0;
	
	cout << "Fibonacci Numbers: \n \n ";

	// Display the number 1 to 21 in one line
	for (n = 0; n <= 20; n++)
	{
		if (n==0)
		{
		cout << x << "," ;
		continue;
		
		}
		if (n==1)
		{
		cout << y << ",";
		continue;
		}

		

		z = x + y;
		x = y;
		y = z; 

		cout << z << "," ;
		
	}

	while(n==21)
		{
			z = x + y;
			x = y;
			y = z; 

			cout << z << "";
			break;
		}
	



	
_getch();
return 0;
}
