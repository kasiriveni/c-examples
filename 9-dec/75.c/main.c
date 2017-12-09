// Open, write and close a file :
# include <stdio.h>
# include <string.h>

int main( )
{
    FILE *fp ;
    char data[50];
    printf( "Opening the file test.c in write mode" );
    fp = fopen("test.c", "w") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;
        return 1;
    }
    printf( "\n Enter some text from keyboard to write in the file test.c" ) ;
    while ( strlen(gets(data)) > 0 )
    {
        fputs(data, fp);
        fputs("\n", fp);
    }
    printf("Closing the file test.c") ;
    fclose(fp) ;
    return 0;
}
