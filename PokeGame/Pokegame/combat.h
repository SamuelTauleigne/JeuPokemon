#include "pokemonTypes.h"
#include "Pokedex.h"

#ifndef __CombatEspece__
#define __CombatEspece__
typedef struct CombatEspece
{
	char* nature;
	char* strongAgainst[5];
	char* weakAgainst[5];
	CombatEspece* next;
} CombatEspece;
#endif

// Table de hachage de taille 26
#ifndef __CombatHash__
#define __CombatHash__
typedef struct
{
	int size;
	CombatEspece* content[26];
} CombatHash;
#endif

int hashf(const char *str, CombatHash h);

char* pokemonTypeToString(PokemonType t);

CombatEspece* get(CombatHash* hashtable, char* key);

bool contains(CombatHash* hashtable, CombatEspece* c);

void insert(CombatEspece* c, CombatHash* hashtable);

CombatHash* initCombatHash();

// COMBAT
int combat(int id1, int id2, Pokedex* monPokedex, EspecePokemon bestiaire[], CombatHash* hashtable, char* typesLabel[]);