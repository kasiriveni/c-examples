//allcoting memory using calloc()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char name[100];
   char *description;

   strcpy(name, "interesting");

   description = calloc( 200,sizeof(char) );

   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "c language");
   }

   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
}
