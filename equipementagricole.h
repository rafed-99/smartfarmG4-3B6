#ifndef EQPAGRI_H_INCLUDED
#define EQPAGRI_H_INCLUDED

typedef struct{
int id;
char modele[30];
char fabricateur[30];
char marque[30];
int fonctionnement;
}equipagri;

void ajouter(equipagri e);
void modifier(equipagri e);
void supprimer(equipagri e);
eqpagri chercher(equipagri e);
