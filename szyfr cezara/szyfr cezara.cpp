﻿using namespace std;
#include <iostream>

void Szyfr(int klucz, char tab[]);

int main()
{
	char tab[1001];
	int klucz;


	cout << "Podaj wyraz składający się z małych liter:";
	cin >> tab;

	cout << "Podaj klucz z przedziału [-26...26]: ";
	cin >> klucz;

	Szyfr;

	cout << "Po zaszyfrowaniu: " << tab << endl;

	cout << "Po rozszyfrowaniu: " << tab << endl;

	return 0;
}
void Szyfr(int klucz, char tab[]) {

	int dl = strlen(tab);

	if (!(klucz >= -26 && klucz <= 26))

		if (klucz >= 0)
			for (char i = 0; i < dl; i++) 
			{
				if (tab[i] + klucz <= 'z') tab[i] += klucz;
				else tab[i] = tab[i] + klucz - 26;
			}
		else
			for (char i; i < dl;i++) 
			{
			if (tab[i] + klucz >= 'a') tab[i] += klucz;
		else tab[i] = tab[i] + klucz + 26;
		}
	 
	

}