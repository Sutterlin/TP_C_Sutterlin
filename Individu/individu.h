#pragma once

#include <iostream>
#include <string>
using namespace std;

class individu
{

private:
	string numerosecu;
	string nom;
	string prenom;
	int jour_naissance;
	int mois_naissance;
	int annee_naissance;
	string profession;







public:
	individu();
	individu(string mnumerosecu, string mnom, string mprenom, int mjour_naissance, int mmois_naissance, int mannee_naissance, string mprofession);
	~individu();
	string getNom() const;
	string getPrenom() const;
	string getNumSecu() const;
	string getDateNaissance() const;
	string getProfession() const;
	void setProfession(string mprofession);

};

