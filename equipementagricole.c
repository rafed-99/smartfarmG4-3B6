#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"eqpagri.h"

void ajouter(equipagri e)
{
    file* f;
    f=fopen("eqagri.txt",a+)
    if(f!=NULL)
    {
        do
        {
        printf("donner l'id de l'equipement agricole\n");
        scanf("%s",e.id);
        }while(verif(e.id)!=1);
        printf("donner le modele de l'equipement agricole\n");
        scanf("%s",e.id);
        printf("donner le fabricateur de l'equipement agricole\n");
        scanf("%s",e.id);
        printf("donner la marque de l'equipement agricole\n");
        scanf("%s",e.id);
        do
        {
            printf("donner l'etat de fonctionnement de l'equipement agricole\n");
            scanf("%d",&e.fonctionnement);
        }while((e.fonctionnement<0)||(e.fonctionnement>1));
        fprintf(f,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement);
        fclose(f);
    }
    else
    {
        printf("fichier introuvable\n");
    }
}

void modifier(equipagri e)
{
    eqpagri c;
    file* f;
    file* s;
    f=fopen("eqagri.txt",r+);
    s=fopen("temp.txt",a+);
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement)!=EOF)
        {
                printf("donner l'id de l'equipement agricole a modifier\n");
                scanf("%s",c.id);
                if(strcmp(&c.id,&o.id)==0)
                {
                    printf("donner le modele de l'equipement agricole\n");
                    scanf("%s",c.id);
                    printf("donner le fabricateur de l'equipement agricole\n");
                    scanf("%s",c.id);
                    printf("donner la marque de l'equipement agricole\n");
                    scanf("%s",c.id);
                    do
                    {
                    printf("donner l'etat de fonctionnement de l'equipement agricole\n");
                    scanf("%d",&c.fonctionnement);
                    }while((c.fonctionnement<0)||(c.fonctionnement>1));
                    fprintf(s,"%s %s %s %s %d \n",c.id,c.modele,c.fabricateur,c.marque,c.fonctionnement);
                    fclose(s);
                }
        }
    }
    else
    {
        fprintf(s,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement);
    }
    fclose(f);
    fclose(s);
    remove("eqagri.txt");
    rename("temp.txt","eqagri.txt");
}

void supprimer(equipagri e)
{
    eqpagri c;
    file* f;
    file* s;
    f=fopen("eqagri.txt",r+);
    s=fopen("temp.txt",a+);
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement)!=EOF)
        {
                printf("donner l'id de l'equipement agricole a modifier\n");
                scanf("%s",c.id);
                if(strcmp(&c.id,&e.id)==0)
                {

                    fprintf(s,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement);

                }
        }
    }
    fclose(f);
    fclose(s);
    remove("eqagri.txt");
    rename("temp.txt","eqagri.txt");
}

equipagri chercher(equipagri e)
{
file* f;
equipagri c;
if(f!=NULL)
{
printf("donner l'id  de l'equipement agricole a chercher\n");
scanf("%s",c.id);
while(fscanf(f,"%s %s %s %s %d \n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement)!=EOF)
{
if(strcmp(&c.id,&e.id)==0)
{
printf(" ID : %s\n modele : %s\n fabricateur : %s\n marque : %s\n etat de fonctionnement : %s\n",e.id,e.modele,e.fabricateur,e.marque,e.fonctionnement);
}
}
}
fclose(f);
}
