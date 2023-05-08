#include <stdio.h>
#include <stdlib.h>
int c [9] ={0};
int i = 0;
int tourdejeu = 0;
int sineuf = 0;
int quigagne = 0;
int main()
{
while(tourdejeu<=9)
    {
    printf(" %d %d %d \n %d %d %d \n %d %d %d \n vous avez choisi la case %d \n ",c[7],c[8],sineuf,c[4],c[5],c[6],c[1],c[2],c[3],i);
    printf("quelle case voulez-vous jouer?");
     i=0;
    scanf("%d",&i);
    if (i == 9)
        {
        if (tourdejeu %2 == 0)
            {
            sineuf =1;
            tourdejeu++;
            }
        else
            {
            sineuf =2;
            tourdejeu++;
            }
        }
    if (c[i]=0)
        {
        tourdejeu++;
        }
     if (tourdejeu %2 == 0)
            {
            c[i]=1;
            }
        else
            {
            c[i]=2;
            }
   if(1==c[1]&&1==c[2]&&1==c[3]  || 1==c[4]&&1==c[5]&&1==c[6]  || 1==c[7]&&1 == c[8] &&1== sineuf||1==c[1]&&1==c[4]&&1==c[7]  || 1==c[2]&&1==c[5]&&1==c[8]  || 1==c[3] &&1== c[5] &&1== sineuf||1==c[1]&&1==c[5]&&1==sineuf || 1==c[3] &&1== c[5] &&1== c[7])
        {
        tourdejeu=9;
        quigagne = 1;
        printf(" %d %d %d \n %d %d %d \n %d %d %d \n vous avez choisi la case %d \n ",c[7],c[8],sineuf,c[4],c[5],c[6],c[1],c[2],c[3],i);
        printf("\n\n\n\n\n\n le joueur%d a gagné\n",quigagne);
        }
    if(2==c[1]&&2==c[2]&&2==c[3]  || 2==c[4]&&2==c[5]&&2==c[6]  || 2==c[7] &&2== c[8] &&2== sineuf||2==c[1]&&2==c[4]&&2==c[7]  || 2==c[2]&&2==c[5]&&2==c[8]  || 2==c[3] &&2== c[6] &&2== sineuf||2==c[1]&&2==c[5]&&2==sineuf  || 2==c[3] &&2== c[5] &&2== c[7])
        {
        quigagne = 2;
        tourdejeu=9;
        printf(" %d %d %d \n %d %d %d \n %d %d %d \n vous avez choisi la case %d \n ",c[7],c[8],sineuf,c[4],c[5],c[6],c[1],c[2],c[3],i);
        printf("\n\n\n\n\n\n le joueur %d a gagné\n",quigagne);
        }
        if(quigagne = 0)
        {
         printf("aucun joueur n'a gagné");
        }

  tourdejeu++;
    }
return (0);
}
