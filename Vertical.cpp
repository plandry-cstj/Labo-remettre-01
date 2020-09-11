// But : Écrire un programme qui prend un nombre de cinq chiffres. Il vérifie que le nombre a bien 5 chiffres et les affiche verticalement
// Auteur : Pierre-Olivier Landry
// Date : 2020-09-11


#include <iostream>

void main()
{

	setlocale(LC_ALL, "");

	int nombre;

	//Le programme demande à l'utilisateur d'entrer un nombre à 5 chiffres
	std::cout << "Veuillez entrer un nombre à 5 chiffres : ";
	// Le nombre que l'utilisateur a écrit est lu par le programme
	std::cin >> nombre;
	
	// Le programme prends le premier chiffre et le stock
	chiffre1 = nombre / 10000;

	// Je n'arrive pas à continuer :(

	if (nombre > 9999 && nombre < 100000)
	{
		// Le programme affiche le premier chiffre
		std::cout << chiffre1<<std::endl;
	}
	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}

}


// Plan de test
/*
Nombre						Résultat escompté

12345						1
							2
							3
							4
							5

31574						3
							1
							5
							7
							4

12							Ce nombre ne contient pas 5 chiffres

3745						Ce nombre ne contient pas 5 chiffres
*/
