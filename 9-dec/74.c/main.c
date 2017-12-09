//EXAMPLE PROGRAM FOR PRAGMA IN C LANGUAGE
#include <stdio.h>

void function1( );
void function2( );

#pragma startup function1
#pragma exit function2

int main( )
{
   printf ( "\n Now we are in main function" ) ;
   return 0;
}

void function1( )
{
   printf("\nFunction1 is called before main function call");
}

void function2( )
{
   printf ( "\nFunction2 is called just before end of " \
            "main function" ) ;
}
