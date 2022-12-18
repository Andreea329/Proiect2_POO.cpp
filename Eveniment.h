#pragma once
#include<iostream>
#include<string>
using namespace std;

class Eveniment
{
    char* categorieEveniment;
    string ziEveniment;
    string oraEveniment;
    string anEveniment;
    string lunaEveniment;
    static int nrEvenimente2022;

public:
    Eveniment();

    Eveniment(const char* categorieEveniment, string ziEveniment, string oraEveniment, string anEveniment, string lunaEveniment);

    Eveniment(const Eveniment& e);

    ~Eveniment();

    Eveniment& operator=(const Eveniment& e);

    char* getCategorieEveniment();
    void setCategorieEveniment(char* categorieEveniment);

    string getZiEveniment();
    void setZiEveniment(string ziEveniment);
    string getOraEveniment();
    void setOraEveniment(string oraEveniment);
    string getAnEveniment();
    void setAnEveniment(string anEveniment);
    string getLunaEveniment();
    void setLunaEveniment(string lunaEveniment);
    friend ostream& operator<<(ostream&, Eveniment);
    friend istream& operator>>(istream&, Eveniment&);
    static int getNrEvenimente();
    explicit operator string(); // operator de cast la string explicit
    int operator()();  // functie ce returneaza lungimea adresei
    string data_eveniment();  //prima metoda
    static  void setNrEvenimente2022(int nr);



};
