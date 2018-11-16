
#include "pch.h"
#include "pokemon.h"
#include "Pokedex.h"
#include "bestiaire.h"
#include <iostream>

using namespace std;


// Evolution Pokemon
void evolve(Pokemon& p, EspecePokemon bestiaire[]/*, Ressources Resources*/)
{
	int k;
	for (k = 0; k < 150; k++)
	{
		if (bestiaire[k].nom == p.nom)
			break;
	}
	/*
	int necessaryCandies = bestiaire[k].nbBonbonsPourEvoluer;
	if ((necessaryCandies <= Resources.candies) & (bestiaire[k].evolvesTo != nullptr))
	{
		p.nom = (char*)bestiaire[k].evolvesTo;
		p.evolution = p.evolution + 1;
		Resources.candies -= necessaryCandies;
	}
	*/
	p.evolution = p.evolution + 1;
}


// PowerUp Pokemon
void powerup(Pokemon& p)
{
	p.cp = (int)(p.cp*1.25);
}

// Affichage Pokemon
void display(const Pokemon p, EspecePokemon bestiaire[], char* typesLabel[18])
{
	int type = findType(p, bestiaire);
	cout << "Nom : " << p.nom << endl << "Type : " << typesLabel[type] << endl << "XP : " << p.xp << endl << "Evolution : " << p.evolution << endl << "PV : " << p.pv << endl << "CP : " << p.cp << endl;
}
