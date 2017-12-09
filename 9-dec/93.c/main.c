/* use &(address of) and *(pointer op or value at address op ) operator  */
#include<stdio.h>
void main()
{
  int a=500;
  float x = 500.80;
  char ch = 'a';

  int *p1;
  float *p2;
  char *p3;
  p1= &a;
  p2=&x;
  p3=&ch;
  printf ( "a= %d\n",a);
  printf ( "x= %f\n",x);
  printf ( "ch= %c\n",ch);
  printf ( "address of a= %u\n",&a);
  printf ( "address of x= %u\n",&x);
  printf ( "address of ch= %u\n",&ch);

  printf ( "value at address of a= %d\n",*(&a));
  printf ( "value at address of x= %f\n",*(&x));
  printf ( "value at address of ch= %c\n",*(&ch));
  // use of pointer
  printf ( "address of a= %u\n",p1);
  printf ( "address of x= %u\n",p2);
  printf ( "address of ch= %u\n",p3);

  printf ( "value at address of a= %d\n",*p1);
  printf ( "value at address of x= %f\n",*p2);
  printf ( "value at address of ch= %c\n",*p3);
    getch();
}
