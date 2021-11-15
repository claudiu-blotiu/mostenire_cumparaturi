#include "Comanda.h"

Comanda::Comanda(string destinatie, int total_plata):Client("Bogdan",32,"Sibiu",1)
{
	cout << "Constr cu 3 parametrii Comanda" << endl;
	this->destinatie = destinatie;
	this->total_plata = total_plata;
}

Comanda::Comanda(const Comanda& order) :Client(order)
{
	cout << "Constr de copiere Comanda" << endl;
	this->destinatie = order.destinatie;
	this->total_plata = order.total_plata;
}

Comanda::Comanda(string destinatie, int total_plata, string nume, int varsta, string oras, bool fidel) : Client(nume, varsta, oras, fidel)
{
	cout << "Constr cu 7 parametrii Comanda" << endl;

	this->destinatie = destinatie;
	this->total_plata = total_plata;
}


void Comanda::set_destinatie(string destinatie)
{
	this->destinatie = destinatie;
}
string Comanda::get_destinatie()
{
	return this->destinatie;
}

void Comanda::set_total_plata(int vechime)
{
	this->total_plata = total_plata;
}
int Comanda::get_total_plata()
{
	return this->total_plata;
}


string Comanda::description_Comanda()
{
	string text = "";

	text += "destinatie: " + this->destinatie + "\n";
	text += "total_plata: " + to_string(this->total_plata) + "\n";
	
	return text;
}


