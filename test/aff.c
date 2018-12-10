#include <stdio.h>
#include <graph_projet.h>
#define N 40
#define M 20

int affichage()
{
    char plateau[N][N]={
    {"--------------------------------"},
    {"|            0 0 0             |"},
    {"|            0 1 0             |"}, //////
    {"|            0 2 0             |"},
    {"|            0 3 0             |"},
    {"|            0 4 0             |"},
    {"|            0 5 0             |"},
    {"|0 0 0 0 0 0 0 6 0 0 0 0 0 0 0 |"},
    {"|0 1 2 3 4 5 6 + 6 5 4 3 2 1 0 |"},
    {"|0 0 0 0 0 0 0 6 0 0 0 0 0 0 0 |"},
    {"|            0 5 0             |"},
    {"|            0 4 0             |"},
    {"|            0 3 0             |"},
    {"|            0 2 0             |"},
    {"|            0 1 0             |"},
    {"|            0 0 0             |"},
    {"--------------------------------"}
  };
  for (int i=0;i<N;i++)
  {
    printf("\n");
    for(int j=0;j<N;j++)
    {
      if ((i<=7)&&(j<=15))
      {
        if(plateau[i][j]=='0')
        {
          printf("\033[34m%c",plateau[i][j]);
        }
        else
        {
          printf("\033[0m%c",plateau[i][j]);
        }
      }
      else if ((i<=8)&&(j>16))
      {
        if(plateau[i][j]=='0')
        {
          printf("\033[33m%c",plateau[i][j]);
        }
        else
        {
          printf("\033[0m%c",plateau[i][j]);
        }
      }
      else if ((i>7)&&(j<=15))
      {
        if(plateau[i][j]=='0')
        {
          printf("\033[32m%c",plateau[i][j]);
        }
        else
        {
          printf("\033[0m%c",plateau[i][j]);
        }
      }
      else if((i>8)&&(j>=14))
      {
        if (plateau[i][j]=='0')
        {
          printf("\033[31m%c",plateau[i][j]);
        }
        else
        {
          printf("\033[0m%c",plateau[i][j]);
        }
      }
      else
      {
        printf("%c",plateau[i][j]);
      }
    }//////
  }
}
