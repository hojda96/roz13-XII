#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>

using namespace std;

char* dopisek(char *tekst,int rozmiar);
char* tablicowo(char tekst[], int rozmiar);

int main()
{
	constexpr int rozmiar_tablicy = 20;
	char tekst[rozmiar_tablicy]{ "wazna wiadomosc" };
	
	cout << dopisek(tekst, rozmiar_tablicy)<<"\n\n";

	char drugitekst[rozmiar_tablicy]{ "wazna wiadomosc" };

	cout << tablicowo(drugitekst, rozmiar_tablicy) << "\n\n";
	
}

char* dopisek(char* tekst, int rozmiar)
{
	int dlugosc_tekstu=0;
	while (*(tekst++)) dlugosc_tekstu++;//przesuwa na null, nie liczy null 
	tekst -= dlugosc_tekstu+1; //cofamy wskaznik
	
	auto *Uwaga = new char[rozmiar];//przygotowujemy string do strcat
	strcpy(Uwaga, "Uwaga: ");		//Uwaga char[8]					


	if (dlugosc_tekstu+8 > rozmiar) { //strinig za dlugi // Uwaga char[8]
		strncat(Uwaga, tekst, rozmiar - 7 - 3 - 1);//od rozmiaru odejmujemy 7 na symbole w uwaga, 3 na kropki i jeden na null

		strcat(Uwaga, "...");

	}
	else {
		strncat(Uwaga, tekst, rozmiar - 7  - 1);
	}

	strcpy(tekst, Uwaga); // przepisuje uwaga do orginalnego stringu

	delete[] Uwaga;

	return tekst;
}

char* tablicowo(char tekst[], int rozmiar)
{
	int dlugosc_tekstu = 0;
	while (tekst[dlugosc_tekstu++]); //wliczony null

	char* pomocniczy=new char[dlugosc_tekstu+7]{};//+7 na "Uwaga: "
	char Uwaga[]{ "Uwaga: " };

	
	int i = 0;
	while (pomocniczy[i] = Uwaga[i]) i++;
	

	if (dlugosc_tekstu+7>rozmiar) {

		for (int a = 0; a < rozmiar - 11; a++, i++) pomocniczy[i] = tekst[a];
		
		for (int a = 0; a < 3; a++,i++) pomocniczy[i] = '.';
	
	}
	else
	{
		while (pomocniczy[i] = tekst[i - 7]) i++;
	}

	int j = 0;
	while (tekst[j] = pomocniczy[j]) j++;//przepisanie

	delete[] pomocniczy;

	return tekst;
}
