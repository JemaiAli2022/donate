#ifndef STRUCTDON_H_INCLUDED
#define STRUCTDON_H_INCLUDED

typedef struct
{
    int Jour,Mois,Annee;
} Date;
typedef struct
{
    char IdRdv[20];
    int IdDn;
    char Cr[10];
    Date dt_don;
}RDV;

int ajouterRDV(Don d, char filename []);

int modifierRDV(char id[], Don nouv, char * filename);

int supprimerRDV(char id[], char * filename);

RDV chercherRDV(char id[], char * filename);


#endif // STRUCTDON_H_INCLUDED
