#include "ClientA.h"
using namespace std;

Client::Client() {
	this->ListeA = list<Client*>();
}

void Client::add_client(Client* C)
{
	this->ListeA.push_back(C);
}

Client::~Client()
{
    for (int i = 0; i < this->ListeA.size(); i++)
    {
        delete this->ListeA[i]; // polymorphisme
        this->ListeA[i] = 0;
    }
    this->ListeA.clear();
}
