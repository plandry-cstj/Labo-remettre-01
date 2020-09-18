// But : Écrire un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair ou d’un entier impair.
// Auteur : Pierre-Olivier Landry
// Date : 2020-09-11

#include <iostream>

void main()
{

	setlocale(LC_ALL, "");

	int nombre;

	// Le programme affiche un message qui demande à l'utilisateur d'écrire un nombre
	std::cout << "Veuillez entrer un nombre : ";
	//Le programme lit le nombre écrit par l'utilisateur
	std::cin >> nombre;

	// Le programme calcule le nombre et indique s'il est pair ou impair
	// KM : Et pourquoi tu as fait ce type de calcul, utiliser % et 2 et le comparer avec 0
	if (nombre % 2 == 0)
	{
		std::cout << nombre << " est un nombre pair";
	}
	else
	{
		std::cout << nombre << " est un nombre impair";
	}

}

// Plan de test
// KM : Mettre des valeurs négatives et 0
/*
nombre						Résultat escompté

204							204 est un nombre pair
15							15 est un nombre impair
25							26 est un nombre impair
30							30 est un nombre pair
*/
