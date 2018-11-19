#pragma once

#ifndef __EVOLUTION__
#define __EVOLUTION__
typedef struct evolution
{
	char* from;
	char* to;
	evolution* evol;
} evolution;
#endif

#ifndef historique_h
#define historique_h
typedef struct
{
	int nombre; 
	evolution* debut; 
} historique;
#endif /* historique_h */


void insertEvolution(historique* hist, char* before, char* after);