#include "Eveniment.h"
#include "Location.h"
#include "Bilet.h"
#include "Zona.h"
#include<iostream>
#include <vector>
using namespace std;

int main()

{

	Eveniment  ev("meci de fotbal", "12", "10:30", "2022", "martie");
	Eveniment evCopie = ev;
	Eveniment even((char*)"spectacol de opera", "29", "19:30", "2022", "iulie");
	//cout<<ev.data_eveniment();
	//ev.setAnEveniment("2023");
	//cout << ev.getAnEveniment() << endl;
	//evCopie.setCategorieEveniment((char*)"Piesa de teatru");
	//cout << evCopie;
	//Eveniment::setNrEvenimente2022(102);
	//cout << ev.getNrEvenimente() << endl;
	//cout << even.getNrEvenimente() << endl;
	//cout << even.data_eveniment() << endl;

	//apel operator = pt Eveniment;
	Eveniment ev1 = ev;
	//cout << ev1 << endl;
	//cout << even.operator()();
	//cout << even.operator std::string(); // returneaza ziua evenimentului=29
	Eveniment ev3;
	//cin >> ev3;
	//cout << ev3;
	Zona z;
	Location loc1 (1, 1);
	Location loc2(1, 2);
	Location loc3(1, 3);
	Location loc4(1, 4);
	Location loc5(1, 5);

	Location loc6(1, 6);
	Location loc7(1, 7);
	Location loc8(1, 8);
	Location loc9(1, 9);
	Location loc10(1, 10);

	Location loc11(2, 11);
	Location loc12(2, 12);
	Location loc13(2, 13);
	Location loc14(2, 14);
	Location loc15(2, 15);

	Location loc16(2, 16);
	Location loc17(2, 17);
	Location loc18(2, 18);
	Location loc19(2, 19);
	Location loc20(2, 20);





	Location* lista_locuri = new Location[20];
	lista_locuri[0] = loc1;
	lista_locuri[1] = loc2;
	lista_locuri[2] = loc3;
	lista_locuri[3] = loc4;
	lista_locuri[4] = loc5;
	lista_locuri[5] = loc6;
	lista_locuri[6] = loc7;
	lista_locuri[7] = loc8;
	lista_locuri[8] = loc9;
	lista_locuri[9] = loc10;
	lista_locuri[10] = loc11;
	lista_locuri[11] = loc12;
	lista_locuri[12] = loc13;
	lista_locuri[13] = loc14;
	lista_locuri[14] = loc15;
	lista_locuri[15] = loc16;
	lista_locuri[16] = loc17;
	lista_locuri[17] = loc18;
	lista_locuri[18] = loc19;
	lista_locuri[19] = loc20;
	



	vector <Location> listaLocuri;
	listaLocuri.push_back(loc1);
	listaLocuri.push_back(loc2);
	listaLocuri.push_back(loc3);
	listaLocuri.push_back(loc4);
	listaLocuri.push_back(loc5);
	listaLocuri.push_back(loc6);
	listaLocuri.push_back(loc7);
	listaLocuri.push_back(loc8);
	listaLocuri.push_back(loc9);
	listaLocuri.push_back(loc10);
	listaLocuri.push_back(loc11);
	listaLocuri.push_back(loc12);
	listaLocuri.push_back(loc13);
	listaLocuri.push_back(loc14);
	listaLocuri.push_back(loc15);
	listaLocuri.push_back(loc16);
	listaLocuri.push_back(loc17);
	listaLocuri.push_back(loc18);
	listaLocuri.push_back(loc19);
	listaLocuri.push_back(loc20);


	



	for (Location& location : listaLocuri) {
		cout << "Locul"  << location.getLocul() <<" " << "Randul" << " " << location.getRandul() << " ";
	}

	Zona z1("stadion", lista_locuri, 2);

	cout << z1.getListaLocuri()->getLocul() << endl;
	Bilet b("VIP", 150);
	b.setEvenimentB(&evCopie);
	cout << b.getEveniment()->getCategorieEveniment() << endl;
	
	loc1.setBiletL(&b);
	cout << loc1.getBiletL()->getCategorieEV() << endl;
	

	
}