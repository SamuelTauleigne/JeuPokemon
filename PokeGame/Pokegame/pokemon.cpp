
#include "pch.h"
#include "pokemon.h"
#include "bestiaire.h"
#include "Pokedex.h"
#include <iostream>

using namespace std;


// Evolution Pokemon
void evolve(Pokemon& p/*, EspecePokemon bestiaire[], Ressources Resources*/)
{
	p.evolution ++;
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
