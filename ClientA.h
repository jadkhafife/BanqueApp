#pragma once
#include<iostream>
#include<vector>
#include<list>
#include"CompteA.h"


class Client {
private:
	string nom;
	list<CompteA*> ListeA;
public:
	Client();
	void add_client(Client* C);
	~Client();
};