#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eqpagri.h"

void main()
{
	int choix,terminerOouN;

	do
	{
		do
		{
			printf("Bonjour dans l'espace Equipements Agricoles\nMENU\n-1-Ajouter les equipements agricoles\n-2-Modifier les equipements agricoles\n-3-Supprimer les equipements agricoles\n-4-Chercher les equipements agricoles\n");
			scanf("%d",&choix);
		}while((choix<1))||(choix>4));
		switch(choix)
		{
			case 1 : printf("Vous avez choisi d'aller vers la commande -1-Ajouter les equipements agricoles\n");ajouter(eqpagri e);break;
			case 2 : printf("Vous avez choisi d'aller vers la commande -2-Modifier les equipements agricoles\n")modifier(eqpagri e);break;
			case 3 : printf("Vous avez choisi d'aller vers la commande -3-Supprimer les equipements agricoles\n")supprimer(eqpagri e);break;
			case 4 : printf("Vous avez choisi d'aller vers la commande -4-Chercher les equipements agricoles\n")chercher(eqpagri e);break;
			default : printf("Choix errone!!!\n");break;
		}
		do
		{
			printf("Est-ce-que vous voulez continuer ou terminer??\n-0-Terminer\n-1-Continuer\n");
			scanf("%d",&terminerOouN);
		}while((terminerOouN<0)||(terminerOouN>1));
	}while(terminerOouN==1);
}

