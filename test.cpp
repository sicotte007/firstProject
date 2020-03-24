#include <iostream>
#include <fstream> //librairie pour la manipulation de fichiers

using namespace std;

int main()
{
	int nb = 0; //nombre lu dans le fichier
	int total = 0; //total des nombres lu dans le fichier
	ifstream entree; //variable ifstream
	entree.open("nombre.txt"); //ouverture du fichier
	ofstream sortie("sortie.txt"); //variable ofstream et ouverture du fichier

	if (!entree) //ou if(!entree.good()) ou if(entree.fail())
	{
		sortie << "Erreur, le fichier nombre.txt n'a pas pu etre ouvert ou n'existe pas";
		cout << "Erreur, le fichier nombre.txt n'a pas pu etre ouvert ou n'existe pas, \nAppuyez sur n'importe quelle touche.";
		entree.close();
		system("pause > 0");
		exit(0);
	}

    //commentaire de merde
	while (!entree.eof()) { //tant que le fichier n’est pas la fin
		entree >> nb; //lecture dans le fichier

		if (!entree) //ou if(!entree.good()) ou if(entree.fail())
		{
			sortie << "Erreur, le fichier nombre.txt est vide";
			cout << "Erreur, le fichier nombre.txt est vide, \nAppuyez sur n'importe quelle touche.";
			entree.close();
			system("pause > 0");
			exit(0);
		}

		total += nb;
	}
	sortie << "La somme des nombres du fichier nombre.txt est " << total;
	cout << "La somme des nombres du fichier nombre.txt est " << total;
	entree.close();
	sortie.close();
}
