#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	
	cout << "Podaj pierwszą liczbę:";
	cin >> a;
	cout << "Podaj drugą liczbę:";
	cin >> b;

	int iloczyn = a * b;

	while (a != b)
	{
		if (a < b) b = b - a;
		else a = a - b;
	}
	int NWW = iloczyn / a;
	cout << "Najmniejsza wspólna wielokrotność: " << NWW << endl;
}