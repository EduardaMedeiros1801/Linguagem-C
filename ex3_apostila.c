 //Dado um caracter, informe o seu código ASCII em octal, decimal e hexadecimal 
#include <stdio.h>

#include <conio.h>

main()

{

  char caracter;

  printf( "Digite o caracter --> " );

  caracter = getchar(); //ele le um caractere no terminal e devolve o cod. ASCII.
  
  printf("Letra digitada %c", caracter);

  printf( "\n\n" );

  printf( "Octal --> %o\n", caracter );

  printf( "Decimal --> %d\n", caracter );

  printf( "Hexadecimal --> %x\n", caracter );

  return 0;

}


