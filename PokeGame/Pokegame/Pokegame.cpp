// Pokegame.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

/*
Jeu Pokemon
Date de création : 25/10/2018
Auteur : Samuel TAULEIGNE
*/


/*
Tester tri par insertion du Pokedex
*/


#include "pch.h"
#include "header.h"
#include "pokemon.h"
#include "pokemonTypes.h"
#include "bestiaire.h"
#include "utils.h"
#include "Pokedex.h"
#include "historique.h"
#include <iostream>

using namespace std;

// Affichage du menu
int afficheMenu()
{
	cout << "1 - Index des pokemons" << endl;
	cout << "2 - Mon Pokedex" << endl;
	cout << "3 - Attraper un pokemon" << endl;
	cout << "4 - Power-up et evolution" << endl;
	cout << "5 - Combat" << endl;
	cout << "6 - Historique" << endl;
	cout << "7 - Quitter" << endl;
	return 0;
}

// Choix d'une entrée
int choixMenu()
{
	int num;
	afficheMenu();
	cout << "Choisissez une entree du menu en entrant son numero" << endl;
	cin >> num;
	switch (num)
	{
	case 1: cout << "1 - Index des pokemons" << endl;
		break;
	case 2: cout << "2 - Mon Pokedex" << endl;
		break;
	case 3: cout << "3 - Attraper un pokemon" << endl;
		break;
	case 4: cout << "4 - Power-up et evolution" << endl;
		break;
	case 5: cout << "5 - Combat" << endl;
		break;
	case 6: cout << "6 - Historique" << endl;
		break;
	case 7: cout << "6 - Quitter" << endl;
		break;
	default: cout << "Entree non valide." << endl;
		choixMenu();
	}
	afficheMenu();
	return 0;
}


// Avancement :
// Séance 6

int main()
{
	char* typesLabel[18] = { (char*)"Normal", (char*)"Fighting", (char*)"Flying", (char*)"Poison", (char*)"Ground", (char*)"Rock", (char*)"Bug", (char*)"Ghost", (char*)"Steel", (char*)"Fire", (char*)"Grass", (char*)"Water", (char*)"Electric", (char*)"Psychic", (char*)"Ice", (char*)"Dragon", (char*)"Dark", (char*)"Fairy" };
	EspecePokemon bestiaire[150];
	initBestiaire(bestiaire);
	const int SIZE = 3;
	Pokedex* monPokedex = initPokedex(SIZE);
	Ressources Resources;
	Resources.stardust = 900;
	Resources.candies = 100;
	historique* hist = new historique;
	hist->nombre = 0;
	hist->debut = nullptr;
	int num;
	do
	{
		afficheMenu();
		cout << "************************************************************" << endl;
		cout << "Choisissez une entree du menu en entrant son numero" << endl;
		cout << "************************************************************" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
		{
			cout << "1 - Index des pokemons" << endl;
			cout << "Voulez-vous bien trier le bestiaire ? (0/1)" << endl;
			int tri;
			cin >> tri;
			if (tri != 0)
			{
				sortBestiaire(bestiaire);
				displayBestiaire(bestiaire);
			}
			break;
		}
		case 2:
		{
			cout << "2 - Mon Pokedex" << endl;
			displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
			break;
		}
		case 3:
		{
			cout << "3 - Attraper un pokemon" << endl;
			int i;
			do
			{
				Pokemon p = genererPokemon(bestiaire, typesLabel);
				cout << "Un " << p.nom << " sauvage apparait !" << endl;
				cout << "More details ..." << endl;
				cout << "Voulez-vous le capturer, en capturer un autre, ou fuir ? (0/1/2)" << endl;
				cin >> i;
				if (i == 0)
				{
					int chance = rand() % 100;
					if (chance <= 40)
					{
						Resources.stardust += 100;
						Resources.candies += 3;
						cout << "Pokemon capture et ajoute au Pokedex" << endl;
						insertPokemon(monPokedex, p);
					}
					else
					{
						cout << "Le Pokemon s'est enfui" << endl;
					}
				}
				cout << "************************************************************" << endl;
			}
			while (i == 1);
			break;
		}
		case 4:
		{
			cout << "4 - Power-up et evolution" << endl;
			cout << "Que voulez-vous ?" << endl;
			cout << "Je veux faire progresser mon pokemon. (0)" << endl;
			cout << "Je veux faire évoluer mon pokemon. (1)" << endl;
			cout << "Je veux partir. (2)" << endl;
			int newchoice = 2;
			while ((newchoice != 0) && (newchoice != 1))
			{
				cin >> newchoice;
				cout << "Choisissez un pokemon en entrant son identifiant." << endl;
				displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
				cout << endl;
				Pokemon *p;
				int idp;
				cin >> idp;
				p = &(monPokedex->mesPokemons[idp]);
				if (newchoice == 0)
				{
					if ((Resources.candies >= 10) && (Resources.stardust >= 500))
					{
						powerup(*p);
						cout << "C'est fait !" << endl;
					}
					else
					{
						cout << "Eh mais ?! Tu n'as pas assez de ressources !" << endl;
					}
				}
				if (newchoice == 1)
				{
					int k;
					for (k = 0; k < 150; k++)
					{
						if (bestiaire[k].nom == (*p).nom)
							break;
					}
					int necessaryCandies = bestiaire[k].nbBonbonsPourEvoluer;
					if ((necessaryCandies <= Resources.candies) & (bestiaire[k].evolvesTo != nullptr))
					{
						insertEvolution(hist, p->nom, (char*)bestiaire[k].evolvesTo);
						(*p).nom = (char*)bestiaire[k].evolvesTo;
						Resources.candies -= necessaryCandies;
						evolve(*p/*, bestiaire, Resources*/);
						cout << "C'est fait !" << endl;
						display(*p, bestiaire, typesLabel);
					}
				}
				cout << "************************************************************" << endl;
			}
			break;
		}
		case 5:
		{
			cout << "5 - Combat" << endl;
			break;
		}
		case 6:
		{
			cout << "6 - Historique" << endl;
			evolution* e = hist->debut;
			for (int k = hist->nombre; k > 0; k--)
			{
				cout << e->from << " " << e->to << endl;
				e = e->evol;
			}
			break;
		}
		case 7:
		{
			cout << "7 - Quitter" << endl;
			break;
		}
		default:
		{
			cout << "Entree non valide." << endl;
			choixMenu();
		}
		}
	} while (num != 6);
	return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
