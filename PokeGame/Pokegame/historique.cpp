#include "pch.h"
#include "historique.h"

void insertEvolution(historique* hist, char* before, char* after)
{
	// Cr�er la nouvelle �volution
	evolution* e = new evolution;
	e->from = before;
	e->to = after;
	e->evol = nullptr;
	// Ajouter la nouvelle �volution au bout de la liste chain�e
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
	// Ajouter en t�te de liste chain�e
	evolution* p = hist->debut;
	e->evol = p;
	hist->debut = e;
	(hist->nombre)++;
}