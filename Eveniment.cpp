#include "Eveniment.h"
#include<iostream>
#include<string>
using namespace std;

Eveniment::Eveniment()
{
    categorieEveniment = new char[strlen(" ") + 1];
    strcpy_s(categorieEveniment, strlen(" ") + 1, " ");
    ziEveniment = " ";
    oraEveniment = " ";
    anEveniment = " ";
    lunaEveniment = " ";
}

Eveniment::Eveniment(const char* categorieEveniment, string ziEveniment, string oraEveniment, string anEveniment, string lunaEveniment)
{
    this->categorieEveniment = new char[strlen(categorieEveniment) + 1];
    strcpy_s(this->categorieEveniment, strlen(categorieEveniment) + 1, categorieEveniment);
    this->ziEveniment = ziEveniment;
    this->oraEveniment = oraEveniment;
    this->anEveniment = anEveniment;
    this->lunaEveniment = lunaEveniment;
}
Eveniment::Eveniment(const Eveniment& e)
{
    if (e.categorieEveniment != nullptr)
    {
        this->categorieEveniment = new char[strlen(e.categorieEveniment) + 1];
        strcpy_s(this->categorieEveniment, strlen(e.categorieEveniment) + 1, e.categorieEveniment);
    }
    else
    {
        this->categorieEveniment = 0;
    }
    this->ziEveniment = e.ziEveniment;
    this->oraEveniment = e.oraEveniment;
    this->anEveniment = e.anEveniment;
    this->lunaEveniment = e.lunaEveniment;
}
Eveniment::~Eveniment()
{
    if (categorieEveniment != nullptr)
    {
        delete[] categorieEveniment;
        categorieEveniment = nullptr;
    }
}
Eveniment& Eveniment:: operator=(const Eveniment& e)
{
    if (this != &e)
    {
        if (categorieEveniment != nullptr)
        {
            delete[] categorieEveniment;
            categorieEveniment = nullptr;
        }
        if (e.categorieEveniment != nullptr)
        {
            this->categorieEveniment = new char[strlen(e.categorieEveniment) + 1];
            strcpy_s(this->categorieEveniment, strlen(e.categorieEveniment) + 1, e.categorieEveniment);
        }
        else
        {
            this->categorieEveniment = 0;
        }
        this->ziEveniment = e.ziEveniment;
        this->oraEveniment = e.oraEveniment;
        this->anEveniment = e.anEveniment;
        this->lunaEveniment = e.lunaEveniment;

    }
    return *this;
}

char* Eveniment::getCategorieEveniment()
{
    if (categorieEveniment != nullptr)
    {
        char* copie = new char[strlen(categorieEveniment) + 1];
        strcpy_s(copie, strlen(categorieEveniment) + 1, categorieEveniment);
        return copie;
    }
}

void Eveniment::setCategorieEveniment(char* categorieEveniment)
{
    if (categorieEveniment != nullptr)
    {
        if (this->categorieEveniment != nullptr)
        {
            delete[] this->categorieEveniment;

        }
        this->categorieEveniment = new char[strlen(categorieEveniment) + 1];
        strcpy_s(this->categorieEveniment, strlen(categorieEveniment) + 1, categorieEveniment);
    }
}

string Eveniment::getZiEveniment()
{
    return ziEveniment;
}

void Eveniment::setZiEveniment(string ziEveniment)
{   

    this->ziEveniment = ziEveniment;
}

string Eveniment::getOraEveniment()
{
    return oraEveniment;
}
void Eveniment::setOraEveniment(string oraEveniment)
{
    this->oraEveniment = oraEveniment;
}
string Eveniment::getAnEveniment()
{
    return anEveniment;
}
void Eveniment::setAnEveniment(string anEveniment)
{
    this->anEveniment = anEveniment;
}
string Eveniment::getLunaEveniment()
{
    return lunaEveniment;
}

void Eveniment::setLunaEveniment(string lunaEveniment)
{
    this->lunaEveniment = lunaEveniment;
}
ostream& operator<<(ostream& out, Eveniment e)
{
    out << "Categoria evenimentului este: ";
    if (e.categorieEveniment != nullptr)
    {
        out << e.categorieEveniment;
    }
    out << endl;
    out << "Ziua evenimentului este: " << e.ziEveniment << endl;
    out << "Ora evenimentului este: " << e.oraEveniment << endl;
    out << "Anul in care se desfasoara evenimentul este: " << e.anEveniment << endl;
    out << "Luna in care se desfasoara evenimentul este: " << e.lunaEveniment << endl;

    return out;
}

istream& operator>>(istream& in, Eveniment& e)
{
    string buffer;
    cout << "Categoria evenimentului este: ";
    in >> buffer;
    if (e.categorieEveniment != nullptr)
    {
        delete[] e.categorieEveniment;
    }
    e.categorieEveniment = new char[buffer.length() + 1];
    strcpy_s(e.categorieEveniment, buffer.length() + 1, buffer.c_str());

    cout << "Ziua in care se va desfasura evenimentul este: ";
    in >> e.ziEveniment;
    cout << "Ora la care va avea loc evenimentul este: ";
    in >> e.oraEveniment;
    cout << "Anul in care va avea loc evenimentul este: ";
    in >> e.anEveniment;
    cout << "Luna in care va avea loc evenimentul este: ";
    in >> e.lunaEveniment;

    return in;
}
int Eveniment::nrEvenimente2022 = 0;

int Eveniment::getNrEvenimente()
{
    return nrEvenimente2022;
}
void Eveniment::setNrEvenimente2022(int nr)
{
    Eveniment::nrEvenimente2022 = nr;
}
Eveniment:: operator string()
{
    return ziEveniment;
}
int Eveniment::operator()()
{
    if (categorieEveniment != nullptr)
    {
        return strlen(categorieEveniment);
    }
    else
    {
        return 0;
    }
}
string Eveniment::data_eveniment()
{
    string dataEvenCompleta;
    dataEvenCompleta = ziEveniment + " " + lunaEveniment + " " + anEveniment + " " + oraEveniment;
    return dataEvenCompleta;
}
 int Eveniment::NrEvenMartie2022(int nrEvMartie)
{ 
     return nrEvMartie;
}