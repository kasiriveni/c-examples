/* Write a C Program to accept two matrices and check if they are equal */
#include <stdio.h>
#include <stdlib.h>

void main()
{
int A[10][10], B[10][10];
int i, j, R1, C1, R2, C2, flag =1;

printf("Enter the order of the matrix A\n");
scanf("%d %d", &R1, &C1);

printf("Enter the order of the matrix B\n");
scanf("%d %d", &R2,&C2);

printf("Enter the elements of matrix A\n");
for(i=0; i<R1; i++)
{
for(j=0; j<C1; j++)
{
scanf("%d",&A[i][j]);
}
}

printf("Enter the elements of matrix B\n");
for(i=0; i<R2; i++)
{
for(j=0; j<C2; j++)
{
scanf("%d",&B[i][j]);
}
}

printf("MATRIX A is\n");
for(i=0; i<R1; i++)
{
for(j=0; j<C1; j++)
{
printf("%3d",A[i][j]);
}
printf("\n");
}

printf("MATRIX B is\n");
for(i=0; i<R2; i++)
{
for(j=0; j<C2; j++)
{
printf("%3d",B[i][j]);
}
printf("\n");
}

/* Comparing two matrices for equality */

if(R1 == R2 && C1 == C2)
{
printf("Matrices can be compared\n");
for(i=0; i<R1; i++)
{
for(j=0; j<C2; j++)
{
if(A[i][j] != B[i][j])
{
flag = 0;
break;
}
}
}
}
else
{ printf(" Cannot be compared\n");
exit(1);
}

if(flag == 1 )
printf("Two matrices are equal\n");
else
printf("But,two matrices are not equal\n");

}
