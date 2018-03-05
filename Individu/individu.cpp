#include "individu.h"


using namespace std;



individu::individu()
{
	numerosecu = "27000";
	nom = "sutterlin";
	prenom = "sebastien";
	jour_naissance = 27;
	mois_naissance = 9;
	annee_naissance = 1995;
	profession = "etudiant;";
}

individu::individu(string mnumerosecu, string mnom, string mprenom, int mjour_naissance, int mmois_naissance, int mannee_naissance, string mprofession)
{
	numerosecu = mnumerosecu;
	nom = mnom;
	prenom = mprenom;
	jour_naissance = mjour_naissance;
	mois_naissance = mmois_naissance;
	annee_naissance = mannee_naissance;
	profession = mprofession+";";
}


individu::~individu()
{
}

string individu::getNom() const
{
	return nom;
}

string individu::getPrenom() const
{
	return string(prenom);
}

string individu::getNumSecu() const
{

	return string(numerosecu);
}

string individu::getDateNaissance() const
{
	string datedenaissance;
	datedenaissance = to_string(jour_naissance) + "/" + to_string(mois_naissance) + "/" + to_string(annee_naissance);
	return string(datedenaissance);
}

string individu::getProfession() const
{
	return string(profession);
}

void individu::setProfession(string mprofession)
{
	profession = mprofession;
}
