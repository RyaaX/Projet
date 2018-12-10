#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include"init.h"
//#include"tour.h"

/*
joueur 1 : pions {a,b,c,d}
joueur 2 : pions {e,f,g,h}
joueur 3 : pions {i,j,k,l}
joueur 4 : pions {m,n,o,p}
*/
int main()
{
  srand(time(NULL));
  int nbj,nbc,t;
  deplacement_plateau plateau;
  s_joueur joueur[4];
  char pions[4][4]={{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};
  init_jeu(plateau,joueur,&nbj,&nbc,&t);


}

