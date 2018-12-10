#ifndef INIT_H
#define INIT_H

typedef struct
{
  char tour[56];
  char ligne1[6];
  char ligne2[6];
  char ligne3[6];
  char ligne4[6];
}deplacement_plateau;

typedef enum {JAUNE,ROUGE,VERT,BLEU} couleur_j;
typedef enum {JOUEUR1,JOUEUR2,JOUEUR3,JOUEUR4} nom_j;

typedef struct
{
  int principal;
  int secondaire;
}
pion_j;

typedef struct
{
  couleur_j couleur;
  nom_j nom;
  pion_j pion[4];  
}
s_joueur;

int commence(int nbj);
  
int fnbjoueur();

int fnbchevaux();

void init_jeu(deplacement_plateau plateau,s_joueur joueur[],int *nbj,int *nbc,int *t);

#endif INIT_H
