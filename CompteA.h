#pragma once
#include "MAD.h"
#include "ClientA.h"
#include"Operation.h"
#include<iostream>
using namespace std;

class CompteA {
private:
	const int numC;
	static int CountNum;
	Client* nomProprietaire;
	Operation* op;
protected:
	Mad* solde;

public:
	CompteA();
	void consulterSolde();
	virtual void deposerArgent(Mad montant)=0;
	virtual bool retirerArgent(Mad montant)=0;
	void transfererArgent(Mad montant, CompteA C1);
	~CompteA();
};