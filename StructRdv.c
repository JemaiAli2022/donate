#include "StructDon.h"
#include<stdio.h>
#include <string.h>

int ajouterRDV(RDV r, char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee);
        fclose(f);
        return 1;
    }
    else
        return 0;
}

int modifierRDV(char id[], RDV nouv, char * filename)
{
    RDV r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
        return 0;
    else
    {
        while(fscanf(f,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee)!=EOF)
        {
            if(strcmp(r.IdRdv,id) != 0)
                fprintf(f2,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee);
            else

                fprintf(f2,"%s %d %s %d/%d/%d\n",nouv.IdRdv,nouv.IdDn,nouv.Cr,nouv.dt_don.Jour,nouv.dt_don.Mois,nouv.dt_don.Annee);

        }
        fclose(f);
        fclose(f2);
        remove(filename);
        rename("aux.txt", filename);
        return 1;
    }

}

int supprimerRDV(char id[], char * filename)
{
    RDV r ;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
        return 0;
    else
    {
        while(fscanf(f,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee)!=EOF)
        {
            if(strcmp(r.IdRdv,id) != 0)
                fprintf(f2,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee);

        }
        fclose(f);
        fclose(f2);
        remove(filename);
        rename("aux.txt", filename);
        return 1;
    }
}

Don chercherDon(char id[], char * filename)
{
    RDV r;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL )
    {
        while(fscanf(f,"%s %d %s %d/%d/%d\n",r.IdRdv,r.IdDn,r.Cr,d.dt_don.Jour,d.dt_don.Mois,d.dt_don.Annee)!=EOF && tr==0)
        {
            if(strcmp(r.IdRdv,id) == 0)
                tr=1;
        }
    }
    if(tr==0)
        strcpy(r.IdRdv,"PNT");
    return d;

}
