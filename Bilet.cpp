#include"Eveniment.h"
#include "Bilet.h"
#include "Location.h"
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

Bilet::Bilet() :idBilet(0), eveniment()
{
	categorieBilet = new char[strlen(" ") + 1];
	strcpy_s(categorieBilet, strlen(" ") + 1, " ");
	pretBilet = 0;
	
}
Bilet::Bilet(const char* categorieBilet, float pretBilet) :idBilet(idBilet),eveniment()
{
	//eveniment = nullptr;
	this->categorieBilet = new char[strlen(categorieBilet) + 1];
	strcpy_s(this->categorieBilet, strlen(categorieBilet) + 1, categorieBilet);
	this->pretBilet = pretBilet;
	
}
Bilet::Bilet(const Bilet& b):idBilet(b.idBilet)
{
	if (b.eveniment != nullptr)
	{
		this->eveniment = new Eveniment[1];
		this->eveniment[0] = b.eveniment[0];
	}
	else
	{
		this->eveniment = 0;
	}
		this->pretBilet = b.pretBilet;
		if (b.categorieBilet != nullptr)
		{
			this->categorieBilet = new char[strlen(b.categorieBilet) + 1];
			strcpy_s(this->categorieBilet, strlen(b.categorieBilet) + 1, b.categorieBilet);
		}
		else
		{
			this->categorieBilet = nullptr;
		}
	
}
Bilet::~Bilet()
{
	if (eveniment != nullptr)
	{
		delete[] eveniment;
		eveniment = 0;
	}
	if (categorieBilet != nullptr)
	{
		delete[] categorieBilet;
		categorieBilet = 0;
	}
}
Bilet& Bilet:: operator=(const Bilet& b)
{
	if (this != &b)
	{
		if (eveniment != nullptr)
		{
			delete[] eveniment;
			eveniment = 0;
		}
		if (b.eveniment != nullptr)
		{
			this->eveniment = new Eveniment[1];
			this->eveniment[0] = b.eveniment[0];
		}
		else
		{
			this->eveniment = 0;
		}
		this->pretBilet = b.pretBilet;
		if (categorieBilet != nullptr)
		{
			delete[] categorieBilet;
			categorieBilet = 0;
		}
		if (b.categorieBilet != nullptr)
		{
			this->categorieBilet = new char[strlen(b.categorieBilet) + 1];
			strcpy_s(this->categorieBilet, strlen(b.categorieBilet) + 1, b.categorieBilet);
		}
		else
		{
			this->categorieBilet = nullptr;
		}


		return *this;
	}
}
Eveniment* Bilet::getEveniment()
{
	if (eveniment != nullptr)
	{
		Eveniment* copie = new Eveniment[1];
		copie[0] = eveniment[0];
		return copie;
	}
}
void Bilet::setEvenimentB(Eveniment* evnim)
{
	
		eveniment = new Eveniment[1];
		eveniment[0] = evnim[0];

}
char* Bilet::getCategorieEV()
{
	if (categorieBilet != nullptr)
	{
		char* copie = new char[strlen(categorieBilet) + 1];
		strcpy_s(copie, strlen(categorieBilet) + 1, categorieBilet);
		return copie;
	}
}
float Bilet::getPretBilet()
{
	return pretBilet;
}
ostream& operator <<(ostream& out, Bilet b)
{
	b.eveniment = new Eveniment[1];
	
	{
		out << "Evenimentul este: "<<b.eveniment[0];
		
	}

	
		if (b.categorieBilet != nullptr)
	{
		out << "Categoria biletului este: ";
		out << b.categorieBilet;
	}
	out << endl;
	out << "Pretul biletului este: " << b.pretBilet << endl;
	

	return out;

}
istream& operator>>(istream& in, Bilet& b)
{
	if (b.eveniment != nullptr )
	{
		delete[] b.eveniment;
	}
	b.eveniment = new Eveniment[1];
	
	{
		cout << "Evenimentul este: ";
		in >> b.eveniment[0];
	}
	string buffer4;
	cout << "Categoria biletului este: ";
	in >> buffer4;
	if (b.categorieBilet != nullptr)
	{
		delete[] b.categorieBilet;
	}
	b.categorieBilet = new char[buffer4.length() + 1];
	strcpy_s(b.categorieBilet, buffer4.length() + 1, buffer4.c_str());
	cout << "Pretul biletului pus la vanzare pentru eveniment este: ";
	in >> b.pretBilet;
	return in;

 }