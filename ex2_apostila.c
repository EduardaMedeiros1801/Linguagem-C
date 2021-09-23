//Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la, informe o consumo médio. 
#include <stdio.h> //ES padrao

main(){

float distancia, litros, media; 

printf ("\n qual a distancia percorrida?  "); 
scanf ("%f", &distancia); 

printf ("\n qual o consumo total de litros  "); 
scanf ("%f", &litros);

media = distancia/litros; 
printf("A media final é %f", media); 
}
