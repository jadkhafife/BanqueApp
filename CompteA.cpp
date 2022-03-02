#include<iostream>
#include "CompteA.h"
using namespace std;
int CompteA::CountNum = 0;


CompteA::CompteA()
	:numC(++CompteA::CountNum)
{
	this->solde = 0;
	cout << "creation de compte" << endl;
}

void CompteA::consulterSolde()
{
	cout << "votre solde est: " << this->solde << endl;
}

void CompteA::deposerArgent(Mad montant)
{
}

bool CompteA::retirerArgent(Mad montant)
{
}

void CompteA::transfererArgent(Mad montant, CompteA C1)
{
	if (this->retirerArgent(montant) == true) {
		this->retirerArgent(montant);
		C1.deposerArgent(montant);
	}
	else cout << "Cela ne peut pas se produire" << endl;
}

CompteA::~CompteA()
{
	cout << "destruction de compte" << endl;
}
