#include "pch.h"
#include "historique.h"

void insertEvolution(historique* hist, char* before, char* after)
{
	// Créer la nouvelle évolution
	evolution* e = new evolution;
	e->from = before;
	e->to = after;
	e->evol = nullptr;
	// Ajouter la nouvelle évolution au bout de la liste chainée
	/*
	int n = hist->nombre;
	evolution* p = nullptr;
	while (n > 0)
	{
		p = p->evol;
		n--;
	}
	p->evol = e;
	hist->nombre++;
	*/
	// Ajouter en tête de liste chainée
	evolution* p = hist->debut;
	e->evol = p;
	hist->debut = e;
	(hist->nombre)++;
}