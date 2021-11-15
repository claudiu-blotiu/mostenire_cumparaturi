#include<iostream>
#include<string>
using namespace std;

class Client
{
private:

	string nume = "";
	int varsta = 1;
	string oras = "";
	bool fidel = false;

public:

	Client()
	{
		cout << "Eu sunt constructorul fara parametrii al bazei"<<endl;
	}

	Client(string, int, string, bool);

	Client(const Client& customer);

	void set_nume(string);
	string get_nume();

	void set_varsta(int);
	int get_varsta();

	void set_oras(string);
	string get_oras();

	void set_fidel(bool);
	bool get_fidel();

	string description_Client();

	string to_save();

	












};

