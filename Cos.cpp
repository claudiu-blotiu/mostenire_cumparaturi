#include "Cos.h"
Cos::Cos(int nr_produse, int pret):Comanda("Secretara",15)
{
	cout << "Constr cu 3 parametrii Cos" << endl;

	this->nr_produse = nr_produse;
	this->pret = pret;
}

Cos::Cos(const Cos& cumparaturi) :Comanda(cumparaturi)
{
	cout << "Constr de copiere Cos" << endl;

	this->nr_produse = cumparaturi.nr_produse;
	this->pret = cumparaturi.pret;
}

Cos::Cos(int nr_produse, int pret, string destinatie, int total_plata) :Comanda(destinatie, total_plata)
{
	cout << "Constr cu 6 parametrii Cos" << endl;

	this->nr_produse = nr_produse;
	this->pret = pret;
}

void Cos::set_nr_produse(int nr_produse)
{
	this->nr_produse = nr_produse;
}
int Cos::get_nr_produse()
{
	return this->nr_produse;
}

void Cos::set_pret(int pret)
{
	this->pret = pret;
}
int Cos::get_pret()
{
	return this->pret;
}

string Cos::description_Cos()
{
	string text = "";

	text += "nr_produse: " + to_string(this->nr_produse) + "\n";
	text += "pret: " + to_string(this->pret) + "\n";

	return text;
}