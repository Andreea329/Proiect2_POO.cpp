
#include "Location.h"
#include"Eveniment.h"
#include "Bilet.h"

#include<iostream>
#include<string>
using namespace std;
Location::Location():bilet()
{
	randul = 0;
	locul = 0;

}
Location::Location(int randul, int locul) :bilet()
{
	this->randul = randul;
	this->locul = locul;

}
int Location::getRandul()
{
	return randul;
}
int Location::getLocul()
{
	return locul;
}
Bilet* Location::getBiletL()
{
	if (bilet != nullptr)
	{
		Bilet* copie = new Bilet[1];
		copie[0]= bilet[0];
		return copie;
	}
}
void Location::setBiletL(Bilet* bil)
{
	bilet = new Bilet[1];
	bilet[0] = bil[0];
}

