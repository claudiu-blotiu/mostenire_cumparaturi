#include"Client.h"
class Comanda:public Client
{
private:

	string destinatie = "";
	int total_plata = 1;

public:

	Comanda()
	{
		cout << "Constr cu 0 parametrii Comanda" << endl;
	}

	Comanda(string, int);

	Comanda(const Comanda& order);

	Comanda(string, int, string, int, string, bool); // Constructor de initializare

	void set_destinatie(string);
	string get_destinatie();

	void set_total_plata(int);
	int get_total_plata();

	string description_Comanda();
	

};

