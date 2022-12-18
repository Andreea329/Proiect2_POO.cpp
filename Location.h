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

	

};