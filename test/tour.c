#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int lance_de(int t)
{
  int val;
  printf("C'est au tour du joueur %d\n",t+1); 
  val=(rand()%6)+1;
  printf("Le joueur %d fait un %d !\n",t+1,val);
  return val;
}

int sortie_pion(int *t,int nbc)
{
  for(int i=0;i<nbc;i++)
    {
      if(joueur[*t].pion[i].principale==-1)
	{
	  p=i;
	  printf("sortir un pion ?(1 pour oui : ");
	  scanf("%d",&s);
	  i=nbc;
	}
    }
}

voi

void tour (int *t,deplacement_plateau plateau,s_joueur joueur[],char pions[][],int nbc,int nbj)
{
  int s,c=1,p=-1;
  val=lance_de(*t);
  if(val==6)
    {
      s=sortie_pion(t,nbc);
      if(s=1)
	{	  
	  joueur[*t].pion[i].principale=*t*14;
	  plateau.tour[*t*14]=pions[*t][i];
	  printf("le pion %d est sorti",i+1);
	}
      else
	{
	  joue;
	}
    }
  else
    {
      joue;
      *t=(*t+1)%nbj;
    }
}
