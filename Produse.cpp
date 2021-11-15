#include "Produse.h"

Produse::Produse(string producator, string tara, int cantitate) :Cos(10,240) //apleaza Constructorul"Persoana"cu parametrii
{
	this->producator = producator;
	this->tara = tara;
	this->cantitate = cantitate;
	
}

Produse::Produse(const Produse& product):Cos(product)
{
	cout << "Constr copiere Produse" << endl;

	this->producator = product.producator;
	this->tara = product.tara;
	this->cantitate = product.cantitate;
}

Produse::Produse(string producator, string tara, int cantitate, int nr_produse, int pret) :Cos(nr_produse, pret)
{
	cout << "Constr cu 5 parametrii Produse" << endl;

	this->producator = producator;
	this->tara = tara;
	this->cantitate = cantitate;
}

void Produse::set_producator(string producator)
{
	this->producator = producator;
}
string Produse::get_producator()
{
	return this->producator;
}

void Produse::set_tara(string tara)
{
	this->tara = tara;
}
string Produse::get_tara()
{
	return this->tara;
}

void Produse::set_cantitate(int cantitate)
{
	this->cantitate = cantitate;
}
int Produse::get_cantitate()
{
	return this->cantitate;
}

string Produse::description_Produse()
{
	string text = "";

	text += "producator: " + this->producator + "\n";
	text += "tara: " + this->tara + "\n";
	text += "cantitate: " + to_string(this->cantitate) + "\n";

	return text;
}