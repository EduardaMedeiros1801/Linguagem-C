//Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel para percorr�-la, informe o consumo m�dio. 
#include <stdio.h> //ES padrao

main(){

float distancia, litros, media; 

printf ("\n qual a distancia percorrida?  "); 
scanf ("%f", &distancia); 

printf ("\n qual o consumo total de litros  "); 
scanf ("%f", &litros);

media = distancia/litros; 
printf("A media final � %f", media); 
}
