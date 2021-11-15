#include "Client.h"

Client::Client(string nume, int varsta, string oras, bool fidel)
{
	cout << "Eu sunt constrcutorul cu patru paramterii al bazei"<<endl;
	this->nume = nume;
	this->varsta = varsta;
	this->oras = oras;
	this->fidel = fidel;
}

Client::Client(const Client& customer)
{
	cout << "Constr de copiere baza" << endl;

	this->nume = customer.nume;
	this->varsta = customer.varsta;
	this->oras = customer.oras;
	this->fidel = customer.fidel;
}

void Client::set_nume(string nume)
{
	this->nume = nume;
}
string Client::get_nume()
{
	return this->nume;
}

void Client::set_varsta(int varsta)
{
	this->varsta = varsta;
}
int Client::get_varsta()
{
	return this->varsta;
}

void Client::set_oras(string oras)
{
	this->oras = oras;
}
string Client::get_oras()
{
	return this->oras;
}

void Client::set_fidel(bool fidel)
{
	this->fidel = fidel;
}
bool Client::get_fidel()
{
	return this->fidel;
}

string Client::description_Client()
{
	string text = "";

	text += "Nume: " + this->nume + "\n";
	text += "varsta: " + to_string(this->varsta) + "\n";
	text += "Oras: " + this->oras + "\n";
	text += "fidel: " + to_string(this->fidel) + "\n";

	return text;
}

string Client::to_save()
{
	string text = "";

	text += this->nume + " ";
	text += to_string(this->varsta) + " ";
	text += this->oras + " ";
	text += to_string(this->fidel);

	return text;
}