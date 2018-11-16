#include"pokemonTypes.h"
#include"pokemon.h"

#include "pch.h"

#include <iostream>

using namespace std;


// Initialisation Bestiaire
void initBestiaire(EspecePokemon bestiaire[]);

// Affichage Bestiaire
void displayBestiaire(EspecePokemon bestiaire[]);

// Tri du bestiaire
void sortBestiaire(EspecePokemon bestiaire[]);

// Recherche du type dans le bestiaire
int findType(const Pokemon p, EspecePokemon bestiaire[]);