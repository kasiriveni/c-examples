/** PROGRAM FOR PALINDROME STRING ****/
/* Calculate reverse string then match the original string */
#include<stdio.h>
#include<string.h>

main()

   {
     int i,j,c,x;
     char s1[20],s2[20];
     printf("INPUT IS : \n");
     printf(" ENTER ANY STRING \n");
     scanf("%s",s1);
     x  = strlen(s1);
     printf("OUT PUT IS : \n\n");
     j=0;
     for(i=x-1;i>=0;i--)
      {
printf("%c",s1[i]);
s2[j]=s1[i];
j++;
       }
       s2[j] = '\0';
       printf("\n %s \n",s2);
       if(strcmp(s1,s2)==0)
printf(" STRING IS PALLENDROM \n ");
 else
    printf("STRING IS NOT PALLENDROM \n");
      getch();
  }
