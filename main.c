/*
 ingreso un texto
 
 pero sin espacio porque sino  ignora lo que le sigue
 
 pero agarro el texto y lo meto en un array aka grande de 100 digamos
 
 y ese array con miMalloc agarro todos los bloques que si guardaron algo (el tamaño del texto) y hago un nuevo arreglo
 
 ese nuevo bloque pues es del tamaño exacto de lo que ingrese
 
 y pues ya nomas el free borra todo del bloque creado
 
 asi ya simulas que borraste todo del bloque y que te quedo vacio
 */
#include <stdio.h>

#define MAXSIZE 100
void WriteWord (char *input);
void My_Malloc (char *input);
int Count (char *input);

int main(int argc, const char * argv[])
{
    char Mem_Array[MAXSIZE];
    
    printf("Insert text here: ");
    WriteWord(Mem_Array);
    
    My_Malloc(Mem_Array);
   
    return 0;
}

void WriteWord( char *input)
{
    int word = 0 ;
    while ((word = getchar()) != EOF)
    {
        *input++ = word;
        *input = 0;
        
        if (word == '\n')
            break;
    }
}

int Count (char *input)
{
    int count = 0;
    while (*input != '\0')
    {
        count++;
        input++;
    }
    return count - 1;
}

void My_Malloc(char *input)
{
    int i = Count(input);
    char Free_Space[i];
    
    printf("Free Space = %i\n", i);
}

