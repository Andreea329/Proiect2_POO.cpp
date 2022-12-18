
#include "Location.h"
#include"Zona.h"
#include<iostream>
#include<string>

using namespace std;

Zona::Zona()
{
	zona = " ";
	nrElmLis = 0;
	lista_locuri = 0;
}
Zona::Zona(string zona, Location* lista_locuri, int nrElmLis)
{
	this->zona = zona;
	this->nrElmLis = nrElmLis;
	this->lista_locuri = new Location[nrElmLis];
	for (int i = 0;i < nrElmLis;i++)
	{
		this->lista_locuri[i] = lista_locuri[i];
	}
}
Zona::Zona(const Zona& z)
{
	if (z.lista_locuri != nullptr && nrElmLis > 0)
	{
		this->nrElmLis = z.nrElmLis;
		this->lista_locuri = new Location[z.nrElmLis];
		for (int i = 0;i < z.nrElmLis;i++)
		{
			this->lista_locuri[i] = z.lista_locuri[i];
		}

	}
	else
	{
		lista_locuri = 0;
		nrElmLis = 0;
	}
}
Zona::~Zona()
{
	if (lista_locuri != nullptr)
	{
		delete[] lista_locuri;
		lista_locuri = 0;
	}
}
Zona& Zona::operator=(const Zona& z)
{
	if (this != &z)
	{
		if (lista_locuri != nullptr)
		{
			delete[] lista_locuri;
			lista_locuri = 0;
		}
		if (z.lista_locuri != nullptr && nrElmLis > 0)
		{
			this->nrElmLis = z.nrElmLis;
			this->lista_locuri = new Location[z.nrElmLis];
			for (int i = 0;i < z.nrElmLis;i++)
			{
				this->lista_locuri[i] = z.lista_locuri[i];
			}

		}
		else
		{
			lista_locuri = 0;
			nrElmLis = 0;
		}
	} return *this;

}
ostream& operator<<(ostream& out, Zona z)
{
	out << "Zona este: " << z.zona << endl;
	out << "Numarul de elemente al listei: " << z.nrElmLis << endl;
	if (z.getListaLocuri() != nullptr)
	{
		int* lista_locuri = new int[z.getNrElem()];
		for (int i = 0;i < z.getNrElem();i++)
			out << "Lista" << " " << i << ":" << " " << z.lista_locuri;
	}
	return out;

}
istream& operator>>(istream&in, Zona&z)
{
	cout << "Zona este:";
	in >> z.zona;
	cout << "Numarul de elemente ale listei: " << z.nrElmLis << endl;
	if (z.getListaLocuri() != nullptr)
	{
		delete[] z.getListaLocuri();
	}
	//int* lista_locuri = new int[z.getNrElem()];
	//for (int i = 0;i < z.getNrElem();i++)
	//{
	//	cout << "Lista" << " " << i << ":" << " ";
	//	in >> z.lista_locuri;
	//}
	return in;
}
string Zona::getZona()
{
	return zona;
}
Location* Zona::getListaLocuri()
{
	if (lista_locuri != nullptr && nrElmLis > 0)
	{	Location* copie = new Location[nrElmLis];
	for (int i = 0;i < nrElmLis;i++) 
		copie[i] = lista_locuri[i];
	return copie;
	}
}
int Zona::getNrElem()
{
	return nrElmLis;
}
//void Zona::setListaLocuri(int j, int nrEl)
//{
//	if(lista_locuri!=nullptr)
//}
