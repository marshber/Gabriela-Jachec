#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	cout << endl << "Podaj drugą liczbę: ";
	cin >> b;
	
	 while (a != b)
	 {
		 if (a < b) b = b - a;
		 else a = a - b;
	 }
	
	 cout << endl << "Największy wspólny dzielnik :" << a << endl;
}
