#pragma once
#include <string>
#include <fstream>
#include "stdio.h"
#include "stdlib.h"

void lirefichier();
void ecrirefichier(individu Z);
void lireindividu(string nom);
void ecrirebinaire(individu Z);
void lirebinaire();

void lirefichier() {
	//BUT: lire le contenu du fichier et l'afficher
	//ENTREE:Nom du fichier
	//SORTIE:Contenu du fichier affich�.
	ifstream fichier("test.txt", ios::in);  // on ouvre en lecture

	if (fichier)  // si l'ouverture a fonctionn�
	{
		string ligne;
		while (getline(fichier, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
		{
			cout << ligne << endl;  // on l'affiche
		}

		fichier.close(); //on ferme le fichier apr�s l'avoir utilis�.
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl; //on affiche un message d'erreur si �a n'a pas fonctionn�.
    


}

inline void ecrirefichier(individu Z)
//BUT: Ecrire un individu � la suite du fichier
//ENTREE:Nom du fichier, l'individu en question
//SORTIE:Le fichier mis � jour
{
	ofstream fichier("test.txt", ios::out | ios::app);  // ouverture en �criture avec effacement du fichier ouvert

	if (fichier)
	{
		//on �crit les donn�es gr�ce aux accesseurs de la classe Individu
		fichier <<"Num�ro secu: " << Z.getNumSecu() << endl;
		fichier << "Nom: " << Z.getNom() << endl;
		fichier << "Le pr�nom: " << Z.getPrenom() << endl;
		fichier << "La date de naissance: " << Z.getDateNaissance() << endl;
		fichier << "La premi�re profession: " << Z.getProfession() << endl;
		Z.setProfession("chomeur"); //on teste la fonction membre "set profession"
		fichier << "La nouvelle profession: " << Z.getProfession() << endl;
		fichier << ";" << endl;//on s�pare les individus par un ;









		fichier.close();
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl;
}


inline void lireindividu(string nom)
//BUT: Lire les donn�es correspondant � l'individu dont on a donn� le nom
//ENTREE: Le nom du fichier, le nom de l'individu recherch�
//SORTIE: L'affichage des donn�es de l'individu?
{
	ifstream fichier("test.txt", ios::in);  // on ouvre en lecture

	if (fichier)  // si l'ouverture a fonctionn�
	{
		
		
		string ligne;
		while (getline(fichier, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
		{
			if (ligne == "Nom: " + nom) { //on cherche la ligne contenant le nom que l'on a donn� en argument de la proc�dure
				
				do {
					cout << ligne << endl;  // on affiche les lignes qui suivent tant qu'elles sont diff�rentes de ";" qui permet de s�parer les individus.
					getline(fichier, ligne);
				} while (ligne != ";");
				
			}
		}
				

				
				
			
		

		fichier.close();
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl;
}

inline void ecrirebinaire(individu Z)
//BUT: �crire les donn�es dans un fichier binaire
//ENTREE: l'individu que l'on veut �crire, le nom du fichier 
//SORTIE: le fichier mis � jour avec l'individu rajout�
{
	ofstream fichier("test.xyz", ios::out | ios::app | ios::binary);  // ouverture en mode binaire

	if (fichier)
	{
		//on �crit les donn�es gr�ce aux accesseurs de la classe Individu
		fichier << "Num�ro secu: " << Z.getNumSecu() << endl;
		fichier << "Nom: " << Z.getNom() << endl;
		fichier << "Le pr�nom: " << Z.getPrenom() << endl;
		fichier << "La date de naissance: " << Z.getDateNaissance() << endl;
		fichier << "La premi�re profession: " << Z.getProfession() << endl;
		Z.setProfession("chomeur"); //on teste la fonction membre "set profession"
		fichier << "La nouvelle profession: " << Z.getProfession() << endl;
		fichier << ";" << endl;//on s�pare les individus par un ;
	









		fichier.close();
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl;

	//on affiche ce qu'il y a dans le fichier binaire

	








}

inline void lirebinaire()
//BUT: lire le contenu du fichier binaire
//ENTREE: le fichier binaire
//SORTIE: affichage du contenu du fichier binaire
{

	ifstream fichier("test.xyz", ios::in | ios::binary);  // on ouvre en lecture en mode binaire

	if (fichier)  // si l'ouverture a fonctionn�
	{
		string ligne;
		while (getline(fichier, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
		{
			cout << ligne << endl;  // on l'affiche
		}

		fichier.close(); //on ferme le fichier apr�s l'avoir utilis�.
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl; //on affiche un message d'erreur si �a n'a pas f






}





