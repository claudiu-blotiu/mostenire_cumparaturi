#include"Comanda.h"
class Cos:public Comanda
{
private:

	int nr_produse = 1;
	int pret = 1;

public:

	Cos()
	{
		cout << "Constr cu 0 parametrii Cos" << endl;
	}

	Cos(int, int);

	Cos(const Cos& cumparaturi);

	Cos(int, int, string, int);

	void set_nr_produse(int);
	int get_nr_produse();

	void set_pret(int);
	int get_pret();

	string description_Cos();

};

