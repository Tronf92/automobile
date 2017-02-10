#ifndef _AUTOMOBILE_H_
#define _AUTOMOBILE_H_

class Automobile
{
private:
	int _vitezaMax;
	int _vitezaCurenta;
	int _KMparcursi;
	int _KMinit;
	int _KMfinal;
	int timp;

public:
	
	Automobile();
	Automobile(char* culoare, char* model,char* nrInmatriculare);
	void Pornire(int _vitezaCurenta=50);
	void Oprire(int timp);
	void Afisare(int _KMparcursi, char* culoare, char*model, char* nrInmatriculare);

	

};


#endif