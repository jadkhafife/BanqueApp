#include "Courant.h"

Courant::Courant(Mad val)
{
	this->decouvert = val;
	cout << "constructeur Courant" << endl;
}

void Courant::deposerArgent(double montant)
{
	this->solde += montant;
}

bool Courant::retirerArgent(double montant)
{
	if (this->solde >= montant && this->solde <this->decouvert) {
		this->solde -= montant;
		return true;
	}
	else {
		cout << "vous etes a decouvert" << endl;
		return false;
	}
}

Courant::~Courant()
{
	cout << "destructeur Courant" << endl;
}
