
#include "individu.h"
#include "main.h"
#include <string>
#include <fstream>
#include "stdlib.h"


using namespace std;








int main() {
	individu A;//on cr�e deux individus, avec des constructeurs diff�rents
	individu B("27500", "lehmann", "nicolas", 8, 8, 1994, "prof" );
	string mnom;
	
	
    ecrirefichier(A); //on appelle la fonction qui permet d'�crire l'individu A dans le fichier
	lirefichier(); //on appelle la fonction qui lit le contenu du fichier
	cout << "donnez un nom que vous voulez chercher" << endl; //on demande � l'utilisateur le nom qu'il cherche et on affiche les donn�es associ�es
	cin >> mnom; 
	lireindividu(mnom); //on appelle la fonction charg�e de ne lire que les donn�es de l'individu concern�
	ecrirebinaire(B);//on appelle la fonction qui permet d'�crire dans un fichier binaire
	lirebinaire();

	
	
	system("pause");

}