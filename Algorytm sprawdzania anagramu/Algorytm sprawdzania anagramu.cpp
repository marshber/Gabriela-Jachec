#include <iostream>
using namespace std;

bool Funkcja(char *wyraz1, char *wyraz2);

int main()
{
	char wyraz1[123];
	char wyraz2[123];
	char licz[123];

	cout << "Podaj pierwszy wyraz: ";
	cin >> wyraz1;
	cout << "Podaj drugi wyraz: ";
	cin >> wyraz2;

	if (Funkcja(wyraz1, wyraz2) == true) cout << "Podane wyrazy są anagramami";
	else cout << "Podane wyrazy nie są anagranami";
		
}

bool Funkcja(char *wyraz1, char *wyraz2) {

	int dl1 = strlen(wyraz1);
	int dl2 = strlen(wyraz2);

	if (dl1 != dl2) return false;
	
	char licz[123] = {};
	for (int i = 0; i < dl1; i++)
		licz[wyraz1[i]]++;
	for (int i = 0; i < dl1; i++)
		licz[wyraz2[i]]--;

		for (int i = 0; i < 123; i++)
			if (licz[i] != 0) return false;
		return true;
}