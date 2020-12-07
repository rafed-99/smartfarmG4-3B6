#ifndef EQPAGRI_H_INCLUDED
#define EQPAGRI_H_INCLUDED

typedef struct{
int id;
char modele[30];
char fabricateur[30];
char marque[30];
int fonctionnement;
}eqpagri;

void ajouter(eqpagri e);
void modifier(eqpagri e);
void supprimer(eqpagri e);
Eqpagri chercher(eqpagri e);
