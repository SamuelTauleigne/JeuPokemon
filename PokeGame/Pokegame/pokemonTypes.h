// Creation Structure pokemonType
#ifndef __PokemonType__
#define __PokemonType__
typedef enum { Normal, Fighting, Flying, Poison, Ground, Rock, Bug, Ghost, Steel, Fire, Grass, Water, Electric, Psychic, Ice, Dragon, Dark, Fairy} PokemonType;
#endif

// Création de la structure EspecePokemon
#ifndef __EspecePokemon__
#define __EspecePokemon__
typedef struct EspecePokemon
{
	const char* nom;
	PokemonType type;
	int nbBonbonsPourEvoluer;
	const char* evolvesTo;
	bool estEvolue;
} EspecePokemon;
#endif