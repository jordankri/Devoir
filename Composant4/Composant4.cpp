
#include "Composant1.h"
#include "Composant1Version.h"

// declaration des fonctions internes
int soustraction_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return soustraction_interne(p1, p2);
}

int soustraction_interne(int a1, int a2)
{
	return a1 - a2;
}

char * getComposant1Version()
{
	return "Composant 4 version " COMPOSANT_VERSION_STR;
}
