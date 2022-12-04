// p.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double z, i, a, b, k;

	a = 0;
	i = 12;
	k = i;
	while (k <= i + 5)
	{
		a = a + (1 / (((pow(sin(k), 3)) + 5, 4) - log10(abs(k))));
		k++;
	}
	i = 12;
	k = i;
	b = 0;
	while (k <= i + 8)

	{

		b = b + (1 / (((pow(sin(k), 3)) + 5.4) - log10(abs(k))));

		k++;
	}
	z = pow(b, a);

	cout << "i=" << i << "\na=" << a << "\nb=" << b << "\nz=" << z;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
