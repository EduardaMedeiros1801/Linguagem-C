/* obeso.c - informa se uma pessoa est� ou n�o obesa*/ //comentario

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
scanf("%f", &altura); //entrada de dados. &: informa o endere�o de memoria em que a variavel foi alocada. 

imc = peso/pow(altura,2); 
printf ("\n Seu IMC � %.1f", imc); // saida de dados. %1f serve para apresentar a vari�el em decimal. 

if(imc <= LIMITE)	 printf("\n voc� n�o est� obeso"); 
else 	printf("\n voc� est� obeso");

getch(); // aguarda que uma tecla seja precionada para que a excecu��o seja concluida. 

}
