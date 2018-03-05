
#include "individu.h"
#include "main.h"
#include <string>
#include <fstream>
#include "stdlib.h"


using namespace std;








int main() {
	individu A;//on crée deux individus, avec des constructeurs différents
	individu B("27500", "lehmann", "nicolas", 8, 8, 1994, "prof" );
	string mnom;
	
	
    ecrirefichier(A); //on appelle la fonction qui permet d'écrire l'individu A dans le fichier
	lirefichier(); //on appelle la fonction qui lit le contenu du fichier
	cout << "donnez un nom que vous voulez chercher" << endl; //on demande à l'utilisateur le nom qu'il cherche et on affiche les données associées
	cin >> mnom; 
	lireindividu(mnom); //on appelle la fonction chargée de ne lire que les données de l'individu concerné
	ecrirebinaire(B);//on appelle la fonction qui permet d'écrire dans un fichier binaire
	lirebinaire();

	
	
	system("pause");

}