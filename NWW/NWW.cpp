#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int NWW;
	int iloczyn = a * b;

	while (a != b)
	{
		if (a < b) b = b - a;
		else a = a - b;
	}
	NWW = iloczyn / a;
	cout << "Najmniejsza wspólna wielokrotność: " << NWW;
}
