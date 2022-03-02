#pragma once
#include "Heure.h"
class DateH : public Heure
{
public: 
	DateH(int h, int min, int sec, int jour, int mois, int annee);
	void print() const;// masquage
	int maxDays() const;
	bool isbis() const;
	int ConvertTodays() const;

	bool operator>(const DateH& D) const;
	~DateH();
private: 
	int jour;
	int mois; 
	int annee;
};

