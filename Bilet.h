#pragma once
#include "Eveniment.h"
#include<iostream>
#include<string>

using namespace std;

class Bilet
{
	const int idBilet;
	Eveniment* eveniment;
	char* categorieBilet;
	float pretBilet;
public:

	Bilet();
	Bilet(const char* categorieBilet, float pretBilet);
	friend ostream& operator <<(ostream& , Bilet );
	friend istream& operator>>(istream&, Bilet&);

	Eveniment* getEveniment();
	void setEvenimentB(Eveniment* evnim);
	char* getCategorieEV();
	float getPretBilet();
	Bilet(const Bilet& b);
	~Bilet();
	Bilet& operator=(const Bilet& b);

	
};
