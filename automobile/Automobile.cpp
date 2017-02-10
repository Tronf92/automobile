#include "Automobile.h"
#include <iostream>
using namespace std;

Automobile::Automobile()
{
	char* culoare= "rosu";
	char* model="opel";
	char* nrInmatriculare="AR 01 AAA";

}

void Automobile::Pornire(int _vitezaCurenta)
{
	_KMinit=100;
	cout << "km initiali: " << _KMinit;
}

void Automobile::Oprire(int timp)
{
	_vitezaCurenta=50;
	timp= 1;
	_KMfinal=_KMinit +(_vitezaCurenta*timp);
	_KMparcursi=_KMfinal-_KMinit;
	cout << "S-au parcurs: " << _KMparcursi << " KM in  "<< timp << " ore " << endl;
}

void Automobile::Afisare(int _KMparcursi, char* culoare, char*model, char* nrInmatriculare)
{
	

	cout << "Masina este de culoare: " << culoare << " model: " <<  model  << " inmatriculata cu nr: " <<  nrInmatriculare << endl;

}

int main()
{
	Automobile unAuto;
	unAuto.Afisare(0,"rosu","opel","AR 01 AAA");
	unAuto.Pornire(50);
	unAuto.Oprire(1);
	unAuto.Afisare(50,"rosu","opel","AR 01 AAA" ); 
	getchar();
	return 0;

}


