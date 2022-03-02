#pragma once
#include"CompteA.h"
#include"ClientA.h"
#include <vector>


class AppBanque {
private:
	vector<CompteA*> cpt;
	vector<Client*> cl;
};