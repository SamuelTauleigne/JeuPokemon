
#include"pokemon.h"

// Creation de la structure Pokedex
#ifndef __RESSOURCES__
#define __RESSOURCES__
typedef struct
{
	int stardust;
	int candies;
} Ressources;

typedef struct
{
	Pokemon* mesPokemons;
	int capacity;
	int nbPokemons;
} Pokedex;
#endif

// Mon Pokedex, un tableau dynamique
Pokedex* initPokedex(const int size);

// Insertion (Tri) d'un pokemon dans mon pokedex
void insertPokemon(Pokedex* monPokedex, Pokemon p);

// Affichage Pokedex
void displayPokedex(Pokedex* pokedex, EspecePokemon bestiaire[150], char* typesLabel[18], Ressources Resources);

// Génération de Pokemon
Pokemon genererPokemon(EspecePokemon bestiaire[150], char* typesLabel[18]);