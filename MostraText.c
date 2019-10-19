/*Este programa espera que se le pase como argumento el nombre de un archivo
y muestra su contenido por pantalla*/

#include <stdio.h>
#include <stdlib.h>

int main(int nArguments, char* argument[]){ //El nombre del archivo a leer se debe indicar en la llamada del programa

   char ch;
   FILE *fp;
 
   fp = fopen(argument[1], "r"); // read mode
 
   if (fp == NULL)   {
      perror("Error al abrir el fichero.\n");
      exit(EXIT_FAILURE);
   }
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
   
   printf("\n");
   fclose(fp);
   
   return 0;
}