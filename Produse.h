#include"Cos.h"

class Produse :public Cos
{
private:
	
	string producator = "";
	string tara = "";
	int cantitate = 1;

public:

	Produse()
	{
		cout << "Constr cu 0 parametrii Produse" << endl;
	}

	Produse(string,string, int);
	
	Produse(const Produse& product);

	Produse(string, string, int, int, int );

	void set_producator(string);
	string get_producator();

	void set_tara(string);
	string get_tara();

	void set_cantitate(int);
	int get_cantitate();

	string description_Produse();



};

