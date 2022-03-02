#pragma once
#include"CompteA.h"
#include"MAD.h"

class Courant
	:public CompteA
{
private:
	Mad decouvert;
public:
	Courant(Mad val);
	void deposerArgent(double montant) override;
	bool retirerArgent(double montant) override;
	~Courant();
};