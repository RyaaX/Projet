#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int commence(int nbj)
{
  int t=rand()%nbj;
  printf("Le joueur %d commence\n",t+1);
  return t;
}

int fnbjoueur()
{
  int nbj;
  printf("Combien de joueur ? :");
  scanf("%d", &nbj);
  while((nbj > 4)||(nbj < 1))
  {
    printf("le nombre de joueur maximum est de 4\n");
    printf("Combien de joueur ? : ");
    scanf("%d", &nbj);
  }
  return nbj;
}

int fnbchevaux()
{
  int nbc;
  printf("combien de pions ? :");
  scanf("%d",&nbc);
  while((nbc > 4)||(nbc < 1))
  {
    printf("le nombre de pions maximum est de 4\n");
    printf("Combien de pions ? : ");
    scanf("%d", &nbc);
  }
  return nbc;
}


void init_jeu(deplacement_plateau plateau,s_joueur joueur[],int *nbj,int *nbc,int *t)
{
  *nbj=fnbjoueur();
  *nbc=fnbchevaux();
  for(int i=0;i<56;i++) plateau.tour[i]=0;
  for(int i=0;i<6;i++)
    {
      plateau.ligne1[i]=0;
      plateau.ligne2[i]=0;
      plateau.ligne3[i]=0;
      plateau.ligne4[i]=0;
    }
  for(int i=0;i<*nbj;i++)
    {
      joueur[i].couleur=i;
      joueur[i].nom=i;
      for(int j=0;j<*nbc;j++)
	{
	  joueur[i].pion[j].principal=-1;
	  joueur[i].pion[j].secondaire=-1;
	}      
    }
  *t=commence(*nbj);
}

  
