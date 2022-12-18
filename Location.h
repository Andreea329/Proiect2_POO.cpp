#pragma once
#include"Bilet.h"
#include"Eveniment.h"
#include<iostream>
#include<string>

using namespace std;

class Location
{
	int randul;
	int locul;
	Bilet* bilet;
	

public:
	Location();

	Location(int randul, int locul);
	
	Bilet* getBiletL();
	void setBiletL(Bilet* bil);
	int getRandul();
	int getLocul();
	string getOras();
	string getStrada();
	friend ostream& operator<<(ostream&, Location);
	friend istream& operator>>(istream&, Location& );

	string locatieInfo(string oras, string strada);
	Location operator++(int i);
	Location operator--(int i);


};