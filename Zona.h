#pragma once
#include"Location.h"
#include<iostream>
#include<string>
using namespace std;

class Zona
{
	string zona;
	Location* lista_locuri;
	int nrElmLis;
public:
	Zona();
	Zona(string zona, Location* lista_locuri, int nrElmLis);
	Zona(const Zona& z);
	~Zona();
	Zona& operator=(const Zona& z);
	string getZona();
	int getNrElem();
	Location* getListaLocuri();
	
	friend ostream& operator<<(ostream&, Zona);
	friend istream& operator>>(istream&, Zona&);
	
};
