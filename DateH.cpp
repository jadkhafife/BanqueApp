#include "DateH.h"
#include<iostream>
DateH::DateH(int h, int min, int sec, int jour, int mois, int annee)
	:Heure(h,min,sec)

{
	this->annee = (annee > 1900) ? annee : 1900;
	this->mois = (mois > 1 && mois < 13) ? mois : 1;
	this->jour = (jour > 0 && jour <= this->maxDays()) ? jour : 1;
}

void DateH::print() const
{
	this->Heure::print();  
	
	std::cout << this->jour << "/" << this->mois << "/" << this->annee <<std::endl;
}

int DateH::maxDays() const
{ 
	int maxjour;
	if (this->mois == 2) {
		if(this->isbis()){
			maxjour = 29;
		}
		maxjour = 28;
	}
	else if ((this->mois > 7 && this->mois % 2 == 1)
		|| (this->mois < 7 && this->mois % 2 == 0)){
		maxjour = 30;
	}
	maxjour = 31;
	return maxjour;
}

bool DateH::isbis() const
{
	return (this->annee%4==0);
}

int DateH::ConvertTodays() const
{
	int res = this->annee * (this->isbis()) ? 366 : 365; 
	res += this->mois * this->maxDays() + this->jour;
	return res;
}

bool DateH::operator>(const DateH& D) const
{
	if (this->ConvertTodays() > D.ConvertTodays()) {
		return true;
	}
	else if (this->ConvertTodays() == D.ConvertTodays()) {

		return(this->Heure::operator>(D)); // de la classe de base
	}

	return false;
}

DateH::~DateH()
{
}
