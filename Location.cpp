
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
	if (bil ==nullptr)
	{
		cout << "Eroare!";
    }
	else

	{
		bilet = new Bilet[1];
		bilet[0] = bil[0];
	}
}

ostream& operator<<(ostream& out, Location l)
{
	out << "Randul este: " << l.randul << endl;
	out << "Locul este: " << l.locul << endl;
	return out;
}
istream& operator>>(istream&in, Location& l)
{
	cout << "Randul: ";
	in >> l.randul;
	cout << "Locul: ";
	in >> l.locul;
	return in;
}

string Location::locatieInfo(string oras, string strada)
{
	string locatie_info;
	locatie_info = oras+" " + strada;
	return locatie_info;

}
Location Location:: operator++(int i)
{
	Location copie = *this;
	this->randul+=i;
	return copie;
}

Location Location:: operator--(int i)
{
	Location copie = *this;
	this->locul-= i;
	return copie;
}