// Pokegame.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

/*
Jeu Pokemon
Date de création : 25/10/2018 - 25/11/2018
Auteur : Samuel TAULEIGNE
*/




#include "pch.h"
#include "header.h"
#include "pokemon.h"
#include "pokemonTypes.h"
#include "bestiaire.h"
#include "utils.h"
#include "Pokedex.h"
#include "historique.h"
#include "combat.h"
#include <iostream>

using namespace std;

// Affichage du menu
int afficheMenu()
{
	cout << endl << "##### Affichage du menu #####" << endl;
	cout << "1 - Index des pokemons" << endl;
	cout << "2 - Mon Pokedex" << endl;
	cout << "3 - Attraper un pokemon" << endl;
	cout << "4 - Power-up et evolution" << endl;
	cout << "5 - Combat" << endl;
	cout << "6 - Historique" << endl;
	cout << "7 - Quitter" << endl;
	cout << endl;
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
// Terminé -> décoration !

int main()
{
	char* typesLabel[18] = { (char*)"Normal", (char*)"Fighting", (char*)"Flying", (char*)"Poison", (char*)"Ground", (char*)"Rock", (char*)"Bug", (char*)"Ghost", (char*)"Steel", (char*)"Fire", (char*)"Grass", (char*)"Water", (char*)"Electric", (char*)"Psychic", (char*)"Ice", (char*)"Dragon", (char*)"Dark", (char*)"Fairy" };
	EspecePokemon bestiaire[150];
	initBestiaire(bestiaire);
	const int SIZE = 3;
	Pokedex* monPokedex = initPokedex(SIZE);
	Ressources Resources;
	Resources.stardust = 10;
	Resources.candies = 3;
	historique* hist = new historique;
	hist->nombre = 0;
	hist->debut = nullptr;
	/*
	Tests de debug :
	*/
	Resources.stardust = 1000;
	Resources.candies = 3000;
	Pokemon a;
	a.nom = (char*)"Seadra";
	a.xp = 1;
	a.cp = 4;
	a.evolution = 1;
	a.pv = 23;

	Pokemon b;
	b.nom = (char*)"Arbok";
	b.xp = 0;
	b.cp = 123;
	b.evolution = 2;
	b.pv = 134;

	Pokemon c;
	c.nom = (char*)"Zubat";
	c.xp = 40;
	c.cp = 300;
	c.evolution = 1;
	c.pv = 223;

	Pokemon d;
	d.nom = (char*)"Paras";
	d.xp = 0;
	d.cp = 23;
	d.evolution = 1;
	d.pv = 90;

	insertPokemon(monPokedex, a);
	cout << "******* Pokedex after inserting pokemon a *********" << endl;
	displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
	cout << "***************************************************" << endl << endl << endl;

	insertPokemon(monPokedex, b);
	cout << "******* Pokedex after inserting pokemon b *********" << endl;
	displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
	cout << "***************************************************" << endl << endl << endl;

	insertPokemon(monPokedex, c);
	cout << "******* Pokedex after inserting pokemon c *********" << endl;
	displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
	cout << "***************************************************" << endl << endl << endl;

	insertPokemon(monPokedex, d);
	cout << "******* Pokedex after inserting pokemon d *********" << endl;
	displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
	cout << "***************************************************" << endl << endl << endl;

	/*
	Fin des tests
	*/
	int num;
	do
	{
		afficheMenu();
		cout << "************************************************************" << endl;
		cout << "Choisissez une entree du menu en entrant son numero" << endl;
		cout << "************************************************************" << endl;
		cout << "Votre choix : ";
		cin >> num;
		switch (num)
		{
		case 1:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "1 - Index des pokemons" << endl << endl;
			cout << "Voulez-vous bien trier le bestiaire ? (0/1)" << endl;
			cout << "Votre choix : ";
			int tri;
			cin >> tri;
			cout << endl;
			if (tri != 0)
			{
				sortBestiaire(bestiaire);
				displayBestiaire(bestiaire);
			}
			else
			{
				displayBestiaire(bestiaire);
			}
			break;
		}
		case 2:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "2 - Mon Pokedex" << endl;
			displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
			break;
		}
		case 3:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "3 - Attraper un pokemon" << endl;
			int i;
			do
			{
				Pokemon p = genererPokemon(bestiaire, typesLabel);
				cout << endl << "Un " << p.nom << " sauvage apparait !" << endl;
				cout << endl << "More details ..." << endl;
				cout << endl << "Voulez-vous le capturer, en capturer un autre, ou fuir ? (0/1/2)" << endl;
				cout << "Votre choix : ";
				cin >> i;
				cout << endl;
				if (i == 0)
				{
					int chance = rand() % 100;
					if (chance <= 40)
					{
						Resources.stardust += 100;
						Resources.candies += 3;
						cout << "Pokemon capture et ajoute au Pokedex !" << endl;
						cout << "############" << endl << endl;
						insertPokemon(monPokedex, p);
					}
					else
					{
						cout << "Le Pokemon s'est enfui" << endl;
						cout << "############" << endl << endl;
					}
				}
				cout << "************************************************************" << endl;
			} while (i == 1);
			break;
		}
		case 4:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "4 - Power-up et evolution" << endl;
			cout << "Que voulez-vous ?" << endl;
			cout << "Je veux faire progresser mon pokemon. (0)" << endl;
			cout << "Je veux faire evoluer mon pokemon. (1)" << endl;
			cout << "Je veux partir. (2)" << endl;
			cout << endl << "Votre choix : ";
			int newchoice = 2;
			cout << endl;
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
					cout << "Vous voulez faire progresser " << p->nom << endl;
					if ((Resources.candies >= 10) && (Resources.stardust >= 500))
					{
						powerup(*p);
						cout << "C'est fait !" << endl << endl;
						display(*p, bestiaire, typesLabel);
					}
					else
					{
						cout << "Eh mais ?! Tu n'as pas assez de ressources !" << endl;
						cout << "Tu as : " << Resources.candies << " bonbons et " << Resources.stardust << " poussieres." << endl;
						cout << "Mais il te faut 10 bonbons et 500 poussieres !" << endl;
					}
				}
				if (newchoice == 1)
				{
					cout << "Vous voulez faire evoluer " << p->nom << endl;
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
						evolve(*p);
						cout << "C'est fait !" << endl;
						display(*p, bestiaire, typesLabel);
					}
					else
					{
						if (necessaryCandies > Resources.candies)
						{
							cout << endl << "Hey ! Mais tu n'as pas assez de ressources !" << endl;
							cout << "Tu as : " << Resources.candies << " bonbons." << endl;
							cout << "Mais il te faut " << necessaryCandies << " bonbons !" << endl;
						}
						else
							cout << endl << "Impossible ..." << endl;
					}
				}
				cout << "************************************************************" << endl;
			}
			break;
		}
		case 5:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "5 - Combat" << endl;
			displayPokedex(monPokedex, bestiaire, typesLabel, Resources);
			// COMBAT
			int id1, id2;
			do
			{
				cout << "Entrez un à un les indices des pokemons que vous désirez faire combattre." << endl;
				cin >> id1;
				cin >> id2;
			} while ((id1 >= monPokedex->nbPokemons) || (id2 >= monPokedex->nbPokemons) || (id1 < 0) || (id2 < 0));
			CombatHash* hashtable = initCombatHash();
			int id = combat(id1, id2, monPokedex, bestiaire, hashtable, typesLabel);
			cout << id << endl;
			cout << monPokedex->mesPokemons[id].nom << endl;
			break;
		}
		case 6:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "6 - Historique" << endl;
			evolution* e = hist->debut;
			int k = 0;
			while ((k < hist->nombre) && (e != nullptr))
			{
				cout << e->from << " to " << e->to << endl;
				k++;
			}
			/*
			for (int k = 0; k < hist->nombre ; k++)
			{
				cout << e->from << " to " << e->to << endl;
				if (k+1 != hist->nombre)
					e = e->evol;
			}
			*/
			break;
		}
		case 7:
		{
			cout << endl;
			cout << "Vous avez choisi :" << endl << endl;
			cout << "7 - Quitter" << endl;
			break;
		}
		default:
		{
			cout << "Entree non valide." << endl;
			choixMenu();
		}
		}
	} while (num != 7);
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
