#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch, file_name[25];
   FILE *fp;
 
   printf("Introduce el nombre del fichero cuyo contenido quieres que se muestre\n");
   scanf("%s",&file_name);
 
   fp = fopen(file_name, "r"); // read mode
 
   if (fp == NULL)
   {
      perror("Error al abrir el fichero.\n");
      exit(EXIT_FAILURE);
   }
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
 
   fclose(fp);
   return 0;
}