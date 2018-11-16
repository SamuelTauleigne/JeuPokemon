#include "pch.h"
#include"Pokedex.h"
#include"pokemon.h"
#include <string>
#include "utils.h"

#include <iostream>
using namespace std;


// Mon Pokedex, un monPokedex->mesPokemonsleau dynamique
Pokedex* initPokedex(const int size)
{
	Pokedex *p = new Pokedex;
	(*p).mesPokemons = new Pokemon[size];
	(*p).capacity = size;
	(*p).nbPokemons = 0;
	return p;
}

// Insertion (Tri) d'un pokemon dans mon pokedex
void insertPokemon(Pokedex* monPokedex, Pokemon p)
{
	if ((*monPokedex).capacity == (*monPokedex).nbPokemons)
	{
		Pokemon* tmp = (*monPokedex).mesPokemons;
		(*monPokedex).mesPokemons = new Pokemon[int((*monPokedex).capacity*1.5)];
		(*monPokedex).capacity = int((*monPokedex).capacity*1.5);
		(*monPokedex).mesPokemons = tmp;
	}
	// Ajout du Pokemon
	/*
	int j = (*monPokedex).nbPokemons;
	(*monPokedex).mesPokemons[j] = p;
	(*monPokedex).nbPokemons++;
	*/
	// Tri par insertion
	// Insertion
	Pokemon element_a_inserer = p;
	int taille_gauche = (monPokedex->nbPokemons);
	const char* str = (const char*)element_a_inserer.nom;
	int j;
	for (j = taille_gauche; j > 0 && strcmp(monPokedex->mesPokemons[j - 1].nom, str) > 0; j--)
		monPokedex->mesPokemons[j] = monPokedex->mesPokemons[j - 1];
	monPokedex->mesPokemons[j] = element_a_inserer;
	(*monPokedex).nbPokemons++;
}


// Affichage Pokedex
void displayPokedex(Pokedex* pokedex, EspecePokemon bestiaire[150], char* typesLabel[18], Ressources Resources)
{
	cout << endl << "Contenu du pokedex (Actuellement ";
	cout << pokedex->nbPokemons << " pokemons captur�s)" << endl;
	for (int i = 0; i < (pokedex->nbPokemons); i++)
	{
		display((pokedex->mesPokemons)[i], bestiaire, typesLabel);
	}
	cout << "Ressources disponibles : " << endl;
	cout << Resources.candies << " bonbons" << endl;
	cout << Resources.stardust << " poussieres" << endl;
}


// G�n�ration de Pokemon
Pokemon genererPokemon(EspecePokemon bestiaire[150], char* typesLabel[18])
{
	int n;
	EspecePokemon ennemi;
	do
	{
		n = random_at_most(150);
		ennemi = bestiaire[n];
	} while (ennemi.estEvolue == 1);
	Pokemon aleatoire;
	aleatoire.nom = (char*)ennemi.nom;
	aleatoire.xp = 0;
	aleatoire.evolution = ennemi.estEvolue;
	aleatoire.cp = 200 + random_at_most(801);// Attention
	aleatoire.pv = 30 + random_at_most(471);//Attention
	return aleatoire;
}