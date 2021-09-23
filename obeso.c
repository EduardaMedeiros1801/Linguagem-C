/* obeso.c - informa se uma pessoa está ou não obesa*/ //comentario

#include <stdio.h> //ES padrao
#include <stdlib.h>
#include <locale.h>
#include <conio.h> //ES console
#include <math.h> //funcoes matematicas


# define LIMITE 30 //constantes simbolicas

main(){

float peso, altura, imc; 

printf ("\n Qual o peso"); 
scanf("%f", &peso); //entrada de dados

printf ("\n Qual sua altura");
scanf("%f", &altura); //entrada de dados. &: informa o endereço de memoria em que a variavel foi alocada. 

imc = peso/pow(altura,2); 
printf ("\n Seu IMC é %.1f", imc); // saida de dados. %1f serve para apresentar a variáel em decimal. 

if(imc <= LIMITE)	 printf("\n você não está obeso"); 
else 	printf("\n você está obeso");

getch(); // aguarda que uma tecla seja precionada para que a excecução seja concluida. 

}
