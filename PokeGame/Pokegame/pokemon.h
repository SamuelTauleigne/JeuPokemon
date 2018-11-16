
#include"pokemonTypes.h"





// Creation de la structure Pokemon
#ifndef __Pokemon__
#define __Pokemon__
typedef struct
{
	char* nom;
	int xp;
	int evolution;
	int pv;
	int cp;
} Pokemon;


// Evolution Pokemon
void evolve(Pokemon& p, EspecePokemon bestiaire[]/*, Ressources Resources*/);
// void evolve(Ressources Resources, EspecePokemon bestiaire[], Pokemon& p);

// PowerUp Pokemon
void powerup(Pokemon& p);

// Affichage Pokemon
void display(const Pokemon p, EspecePokemon bestiaire[], char* typesLabel[18]);

#endif