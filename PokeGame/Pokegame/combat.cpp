#include "pch.h"
#include "combat.h"
#include "bestiaire.h"
#include "Pokedex.h"

#include <iostream>

using namespace std;

int hashf(const char *str, CombatHash h)
{
	unsigned long hash = 5381; int c;
	while (c = *str++)
		hash = ((hash << 5) + hash) + c;
		/* hash * 33 + c */
	return hash%h.size;
}


char* pokemonTypeToString(PokemonType t)
{
	if (t == Normal)
	{ 
		return (char*)"Normal";
	}
	else if (t == Fighting)
	{ 
		return (char*)"Fighting"; 
	}
	else if (t == Flying) 
	{ 
		return (char*)"Flying"; 
	}
	else if (t == Poison) 
	{ 
		return (char*)"Poison"; 
	}
	else if (t == Ground) 
	{
		return (char*)"Ground";
	}
	else if (t == Rock) 
	{ 
		return (char*)"Rock";
	}
	else if (t == Bug)
	{ 
		return (char*)"Bug"; 
	}
	else if (t == Ghost) 
	{ 
		return (char*)"Ghost";
	}
	else if (t == Steel) 
	{
		return (char*)"Steel";
	}
	else if (t == Fire) 
	{
		return (char*)"Fire";
	}
	else if (t == Grass) 
	{
		return (char*)"Grass";
	}
	else if (t == Water) 
	{
		return (char*)"Water"; 
	}
	else if (t == Electric)
	{
		return (char*)"Electric"; 
	}
	else if (t == Psychic) 
	{ 
		return (char*)"Psychic";
	}
	else if (t == Ice)
	{
		return (char*)"Ice";
	}
	else if (t == Dragon) 
	{ 
		return (char*)"Dragon"; 
	}
	else if (t == Dark) 
	{ 
		return (char*)"Dark";
	}
	else 
	{
		return (char*)"Fairy";
	}
}


CombatEspece* get(CombatHash* hashtable, char* key)
// INCOMPLET : Arrangé !
// Mais il manque l'accès à e : violation d'accès en lecture ---> Initialisation !!!
{
	int k = hashf(key, *hashtable);
	CombatEspece* e = hashtable->content[k];
	if (e == nullptr)
	{
		return nullptr;
	}
	else
	{
		while (strcmp(e->nature, key) != 0)
		{
			e = e->next;
		}
		return e;
	}
}

bool contains(CombatHash* hashtable, CombatEspece* c)
{
	// Attention à la gestion des collisions
	/*
	CombatEspece* element = get(hashtable, c->nature);
	return (element != nullptr);
	*/
	return get(hashtable, c->nature);
}

void insert(CombatEspece* c, CombatHash* hashtable)
{
	int h = hashf(c->nature, *hashtable);
	CombatEspece* d = hashtable->content[h];
	if (d == nullptr)
	{
		hashtable->content[h] = c;
	}
	else
	{
		while (d->next != nullptr)
		{
			d = d->next;
		}
		d->next = c;
	}
}

	/*
	int i = 0;
	if (!contains(hashtable, c))
	{

		// c n'est pas dans la table de hachage

		CombatEspece* tmp, esp;
		esp = *(hashtable->content[hashf(c->nature, *hashtable)]);
		tmp = &esp;

		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}

		tmp->next = c;
		hashtable->content[hashf(c->nature, *hashtable)] = tmp;
	}
	*/


CombatHash* initCombatHash()
{
	CombatHash* hashtable = new CombatHash;
	hashtable->size = 18;
	// Initialisation
	for (int k = 0; k < 26; k++)
	{
		hashtable->content[k] = nullptr;
	}

	// Insertions successives
	int i = -1;
	CombatEspece* bug = new CombatEspece;
	bug->nature = (char*)"Bug";
	bug->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		bug->strongAgainst[i] = nullptr;
		bug->weakAgainst[i] = nullptr;
	}
	bug->strongAgainst[0] = (char*)"Dark";
	bug->strongAgainst[1] = (char*)"Grass";
	bug->strongAgainst[2] = (char*)"Psychic";
	bug->weakAgainst[0] = (char*)"Fire";
	bug->weakAgainst[1] = (char*)"Flying";
	bug->weakAgainst[2] = (char*)"Rock";
	insert(bug, hashtable);

	CombatEspece* dark = new CombatEspece;
	dark->nature = (char*)"Dark";
	dark->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		dark->strongAgainst[i] = nullptr;
		dark->weakAgainst[i] = nullptr;
	}
	dark->strongAgainst[0] = (char*)"Ghost";
	dark->strongAgainst[1] = (char*)"Psychic";
	dark->weakAgainst[0] = (char*)"Bug";
	dark->weakAgainst[1] = (char*)"Fairy";
	dark->weakAgainst[2] = (char*)"Fight";
	insert(dark, hashtable);

	CombatEspece* dragon = new CombatEspece;
	dragon->nature = (char*)"Dragon";
	dragon->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		dragon->strongAgainst[i] = nullptr;
		dragon->weakAgainst[i] = nullptr;
	}
	dragon->strongAgainst[0] = (char*)"Dragon";
	dragon->weakAgainst[0] = (char*)"Dragon";
	dragon->weakAgainst[1] = (char*)"Fairy";
	dragon->weakAgainst[2] = (char*)"Ice";
	insert(dragon, hashtable);

	CombatEspece* electric = new CombatEspece;
	electric->nature = (char*)"Electric";
	electric->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		electric->strongAgainst[i] = nullptr;
		electric->weakAgainst[i] = nullptr;
	}
	electric->strongAgainst[0] = (char*)"Flying";
	electric->strongAgainst[1] = (char*)"Water";
	electric->weakAgainst[0] = (char*)"Ground";
	insert(electric, hashtable);

	CombatEspece* fairy = new CombatEspece;
	fairy->nature = (char*)"Fairy";
	fairy->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		fairy->strongAgainst[i] = nullptr;
		fairy->weakAgainst[i] = nullptr;
	}
	fairy->strongAgainst[0] = (char*)"Dark";
	fairy->strongAgainst[1] = (char*)"Dragon";
	fairy->strongAgainst[2] = (char*)"Fight";
	fairy->weakAgainst[0] = (char*)"Poison";
	fairy->weakAgainst[1] = (char*)"Steel";
	insert(fairy, hashtable);

	CombatEspece* fighting = new CombatEspece;
	fighting->nature = (char*)"Fighting";
	fighting->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		fighting->strongAgainst[i] = nullptr;
		fighting->weakAgainst[i] = nullptr;
	}
	fighting->strongAgainst[0] = (char*)"Dark";
	fighting->strongAgainst[1] = (char*)"Ice";
	fighting->strongAgainst[2] = (char*)"Normal";
	fighting->strongAgainst[3] = (char*)"Rock";
	fighting->strongAgainst[4] = (char*)"Steel";
	fighting->weakAgainst[0] = (char*)"Fairly";
	fighting->weakAgainst[1] = (char*)"Flying";
	fighting->weakAgainst[2] = (char*)"Psychic";
	insert(fighting, hashtable);

	CombatEspece* fire = new CombatEspece;
	fire->nature = (char*)"Fire";
	fire->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		fire->strongAgainst[i] = nullptr;
		fire->weakAgainst[i] = nullptr;
	}
	fire->strongAgainst[0] = (char*)"Bug";
	fire->strongAgainst[1] = (char*)"Grass";
	fire->strongAgainst[2] = (char*)"Ice";
	fire->strongAgainst[3] = (char*)"Steel";
	fire->weakAgainst[0] = (char*)"Ground";
	fire->weakAgainst[1] = (char*)"Rock";
	fire->weakAgainst[2] = (char*)"Water";
	insert(fire, hashtable);

	CombatEspece* flying = new CombatEspece;
	flying->nature = (char*)"Flying";
	flying->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		flying->strongAgainst[i] = nullptr;
		flying->weakAgainst[i] = nullptr;
	}
	flying->strongAgainst[0] = (char*)"Bug";
	flying->strongAgainst[1] = (char*)"Fight";
	flying->strongAgainst[2] = (char*)"Grass";
	flying->weakAgainst[0] = (char*)"Electric";
	flying->weakAgainst[1] = (char*)"Ice";
	flying->weakAgainst[2] = (char*)"Rock";
	insert(flying, hashtable);

	CombatEspece* ghost = new CombatEspece;
	ghost->nature = (char*)"Ghost";
	ghost->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		ghost->strongAgainst[i] = nullptr;
		ghost->weakAgainst[i] = nullptr;
	}
	ghost->strongAgainst[0] = (char*)"Ghost";
	ghost->strongAgainst[1] = (char*)"Psychic";
	ghost->weakAgainst[0] = (char*)"Dark";
	ghost->weakAgainst[1] = (char*)"Ghost";
	insert(ghost, hashtable);

	CombatEspece* grass = new CombatEspece;
	grass->nature = (char*)"Grass";
	grass->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		grass->strongAgainst[i] = nullptr;
		grass->weakAgainst[i] = nullptr;
	}
	grass->strongAgainst[0] = (char*)"Ground";
	grass->strongAgainst[1] = (char*)"Rock";
	grass->strongAgainst[2] = (char*)"Water";
	grass->weakAgainst[0] = (char*)"Bug";
	grass->weakAgainst[1] = (char*)"Fire";
	grass->weakAgainst[2] = (char*)"Flying";
	grass->weakAgainst[3] = (char*)"Ice";
	grass->weakAgainst[4] = (char*)"Poison";
	insert(grass, hashtable);

	CombatEspece* ground = new CombatEspece;
	ground->nature = (char*)"Ground";
	ground->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		ground->strongAgainst[i] = nullptr;
		ground->weakAgainst[i] = nullptr;
	}
	ground->strongAgainst[0] = (char*)"Electric";
	ground->strongAgainst[1] = (char*)"Fire";
	ground->strongAgainst[2] = (char*)"Poison";
	ground->strongAgainst[3] = (char*)"Rock";
	ground->strongAgainst[4] = (char*)"Steel";
	ground->weakAgainst[0] = (char*)"Grass";
	ground->weakAgainst[1] = (char*)"Ice";
	ground->weakAgainst[2] = (char*)"Water";
	insert(ground, hashtable);

	CombatEspece* ice = new CombatEspece;
	ice->nature = (char*)"Ice";
	ice->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		ice->strongAgainst[i] = nullptr;
		ice->weakAgainst[i] = nullptr;
	}
	ice->strongAgainst[0] = (char*)"Dragon";
	ice->strongAgainst[1] = (char*)"Flying";
	ice->strongAgainst[2] = (char*)"Grass";
	ice->strongAgainst[3] = (char*)"Ground";
	ice->weakAgainst[0] = (char*)"Fight";
	ice->weakAgainst[1] = (char*)"Fire";
	ice->weakAgainst[2] = (char*)"Rock";
	ice->weakAgainst[3] = (char*)"Steel";
	insert(ice, hashtable);

	CombatEspece* normal = new CombatEspece;
	normal->nature = (char*)"Normal";
	normal->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		normal->strongAgainst[i] = nullptr;
		normal->weakAgainst[i] = nullptr;
	}
	normal->weakAgainst[0] = (char*)"Fight";
	insert(normal, hashtable); // correction ici.

	CombatEspece* poison = new CombatEspece;
	poison->nature = (char*)"Poison";
	poison->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		poison->strongAgainst[i] = nullptr;
		poison->weakAgainst[i] = nullptr;
	}
	poison->strongAgainst[0] = (char*)"Fairy";
	poison->strongAgainst[1] = (char*)"Grass";
	poison->weakAgainst[0] = (char*)"Ground";
	poison->weakAgainst[1] = (char*)"Psychic";
	insert(poison, hashtable);

	CombatEspece* psychic = new CombatEspece;
	psychic->nature = (char*)"Psychic";
	psychic->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		psychic->strongAgainst[i] = nullptr;
		psychic->weakAgainst[i] = nullptr;
	}
	psychic->strongAgainst[0] = (char*)"Fight";
	psychic->strongAgainst[1] = (char*)"Poison";
	psychic->weakAgainst[0] = (char*)"Bug";
	psychic->weakAgainst[1] = (char*)"Dark";
	psychic->weakAgainst[2] = (char*)"Ghost";
	insert(psychic, hashtable);

	CombatEspece* rock = new CombatEspece;
	rock->nature = (char*)"Rock";
	rock->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		rock->strongAgainst[i] = nullptr;
		rock->weakAgainst[i] = nullptr;
	}
	rock->strongAgainst[0] = (char*)"Bug";
	rock->strongAgainst[1] = (char*)"Fire";
	rock->strongAgainst[2] = (char*)"Flying";
	rock->strongAgainst[3] = (char*)"Ice";
	rock->weakAgainst[0] = (char*)"Fight";
	rock->weakAgainst[1] = (char*)"Grass";
	rock->weakAgainst[2] = (char*)"Ground";
	rock->weakAgainst[3] = (char*)"Steel";
	rock->weakAgainst[4] = (char*)"Water";
	insert(rock, hashtable);

	CombatEspece* steel = new CombatEspece;
	steel->nature = (char*)"Steel";
	steel->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		steel->strongAgainst[i] = nullptr;
		steel->weakAgainst[i] = nullptr;
	}
	steel->strongAgainst[0] = (char*)"Fairy";
	steel->strongAgainst[1] = (char*)"Ice";
	steel->strongAgainst[2] = (char*)"Rock";
	steel->weakAgainst[0] = (char*)"Fight";
	steel->weakAgainst[1] = (char*)"Fire";
	steel->weakAgainst[2] = (char*)"Ground";
	insert(steel, hashtable);


	CombatEspece* water = new CombatEspece;
	water->nature = (char*)"Water";
	water->next = nullptr;
	for (i = 0; i < 5; i++)
	{
		water->strongAgainst[i] = nullptr;
		water->weakAgainst[i] = nullptr;
	}
	water->strongAgainst[0] = (char*)"Fire";
	water->strongAgainst[1] = (char*)"Ground";
	water->strongAgainst[2] = (char*)"Rock";
	water->weakAgainst[0] = (char*)"Electric";
	water->weakAgainst[1] = (char*)"Grass";
	insert(water, hashtable);

	return hashtable;
}


// COMBAT
int combat(int id1, int id2, Pokedex* monPokedex, EspecePokemon bestiaire[], CombatHash* hashtable, char* typesLabel[])
{
	cout << "##### Debut du Combat #####" << endl << endl;
	Pokemon p1 = monPokedex->mesPokemons[id1];
	Pokemon p2 = monPokedex->mesPokemons[id2];
	char* t1 = typesLabel[findType(p1, bestiaire)];
	char* t2 = typesLabel[findType(p2, bestiaire)];
	CombatEspece* c1 = get(hashtable, t1);
	CombatEspece* c2 = get(hashtable, t2);
	/*
	cout << c1->nature << endl;
	*/
	bool flag1 = false;
	for (int k = 0; k < 5; k++)
	{
		if (c1->strongAgainst[k] == t2)
		{
			flag1 = true;
		}
	}
	bool flag2 = false;
	for (int k = 0; k < 5; k++)
	{
		if (c2->strongAgainst[k] == t1)
		{
			flag2 = true;
		}
	}
	int pvloss1 = 30;
	int pvloss2 = 30;
	// Qui est le plus fort ?
	if (flag2)
	{
		pvloss1 = 90;
		cout << p2.nom << " est fort devant " << p1.nom << endl;
	}
	if (flag1)
	{
		pvloss2 = 90;
		cout << p1.nom << " est fort devant " << p2.nom << endl;
	}
	while ((p1.pv > 0) && (p2.pv > 0))
	{
		cout << p1.nom << " a " << p1.pv << " PV !" << endl;
		cout << p2.nom << " a " << p2.pv << " PV !" << endl;
		// Pour l'instant, c'est toujours p1 qui commence à attaquer !
		p1.pv -= pvloss1;
		cout << p1.nom << " perd " << pvloss1 << " PV, il lui reste " << p1.pv << " PV." << endl;
		if (!(p1.pv > 0))
		{
			cout << p1.nom << " n'a plus de vie !" << endl << endl;
			break;
		}
		p2.pv -= pvloss2;
		cout << p2.nom << " perd " << pvloss2 << " PV, il lui reste " << p2.pv << " PV." << endl;
	}
	if (p1.pv <= 0)
	{
		cout << p1.nom << " a perdu, et " << p2.nom << " a gagne." << endl << endl;
		return id1;
	}
	else
	{
		cout << p2.nom << " a perdu, et " << p1.nom << " a gagne." << endl << endl;
		return id2;
	}
}