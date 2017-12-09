/** C program Define Cricket Structure and Team Wise List **/

#include <stdio.h>
#include <string.h>
struct cricket
{
     char nm[15];
     char tnm[10];
     int btavg;
};

void main()
{
struct cricket player[100];
int i,n;
char ch,team[10];
printf("how many player\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
   printf("\nINPUT THE NAME OF PLAYER %d : ",i+1);
   scanf("%s",player[i].nm);
   printf("\nINPUT THE TEAM NAME OF PLAYER %d : ",i+1);
   scanf("%s",player[i].tnm);
   printf("\nINPUT THE BATTING AVERAGE OF PLAYER %d : ",i+1);
   scanf("%d",&player[i].btavg);
}

      printf("=========================================\n");
      printf("  PLAYER'S NAME      country   BATTING AVERAGE\n");
      printf("=========================================\n");
      for (i=0; i<=n; i++)
   printf("  %-20s %-20s%d\n",player[i].nm,
                           player[i].tnm,player[i].btavg);

      read:
       printf("\n\nINPUT FOR WHICH TEAM YOU WANT TO LIST  : ");
       scanf("%s",team);

      printf("\n               %s                 \n",team);
      printf("=========================================\n");
      printf("  PLAYER'S NAME        BATTING AVERAGE\n");
      printf("=========================================\n");
      for (i=0; i<=n; i++)
if (strcmp(team,player[i].tnm)==0)
   printf("  %-20s %d\n",player[i].nm,player[i].btavg);

      printf("\n\nDO YOU WANT TO LIST ANY OTHER TEAM ? (Y/N) : ");
      ch = getche();
      if (ch == 'Y' || ch == 'y')
      goto read;
}
