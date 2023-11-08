#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StructDon.h"
void main()
{
    int choix_fct;
    char f_name[50];
    char ID[20];
    RDV r1,r2;

    do
    {
        printf("choisir la fct a executer : \n 1-Ajouter un Don \n 2-Modifier un Don \n 3-Supprimer un Don \n 4-Chercher un Don \n");
        scanf("%d",&choix_fct);
    }
    while((choix_fct!=1)&&(choix_fct!=2)&&(choix_fct!=3)&&(choix_fct!=4));

    if(choix_fct==1)
    {
        printf("Donner le nom du fichier txt pour stocker l information : (inclure le teminaison .txt a la fin) \n");
        fflush(stdin);
        scanf("%s",f_name);
        printf("Donner les informations du RDV : \n");
        printf(" Code ID : \n");
        fflush(stdin);
        scanf("%s",r1.IdRdv);
        printf(" iddn : \n");
        scanf("%d",&r1.IdDn);
        scanf(" %d %d %d ",&r1.dt_don.Jour,&r1.dt_don.Mois,&r1.dt_don.Annee);
        ajouterRDV(r1, f_name);
        printf("RDV ajoutee");
    }
    if(choix_fct==2)
    {
        printf("Donner le nom du fichier txt pour modifier l information : (inclure le terminaison .txt a la fin) \n");
        fflush(stdin);
        scanf("%s",f_name);
        printf("Donner les informations du RDV a modifier : \n");
        printf("donner l'id du RDV a modifier");
        fflush(stdin);
        scanf("%s",ID);
        printf("Donner les informations du RDV : \n");
        printf(" Code ID : \n");
        fflush(stdin);
        scanf("%s",r2.IdRdv);
        printf(" iddn : \n");
        scanf("%d",&r2.IdDn);
        scanf(" %d %d %d ",&r2.dt_don.Jour,&r2.dt_don.Mois,&r2.dt_don.Annee);
        modifierDon(ID, r2,f_name);
        printf("RDV modifiee");
    }
    if(choix_fct==3)
    {
        printf("Donner le nom du fichier txt pour supprimer l information : (inclure le teminaison .txt a la fin) \n");
        fflush(stdin);
        scanf("%s",f_name);
        printf("Donner l id du RDV a supprimer: \n");
        fflush(stdin);
        scanf("%s",ID);
        supprimerRDV(ID, f_name);
        printf("RDV Supprimee");
    }
    if(choix_fct==4)
    {
        printf("Donner le nom du fichier txt pour chercher l information : (inclure le teminaison .txt a la fin) \n");
        fflush(stdin);
        scanf("%s",f_name);
        printf("Donner les informations du RDV :(ID) \n");
        fflush(stdin);
        scanf("%s",ID);
        r1 = chercherRVD(ID, f_name);
        if (strcmp(r1.IdRdv,"PNT") == 0)
            printf("RDV non Trouvee\n");
        else
        {
            printf("RDV Trouvee: \n");
            printf("%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee);
        }
    }

}
