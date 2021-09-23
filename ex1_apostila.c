// Dadas as duas notas de um aluno, informe a sua média final. 
#include <stdio.h> //ES padrao

main(){

float nota1, nota2, media; 

printf ("\n qual o valor da nota1?  "); 
scanf ("%f", &nota1); 

printf ("\n qual o valor da nota2?  "); 
scanf ("%f", &nota2);

media = (nota1+nota2)/2; 
printf("A media final é %f", media); 
}
