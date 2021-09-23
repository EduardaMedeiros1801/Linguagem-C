// Dadas as medidas dos catetos de um triângulo retângulo,informe a medida da hipotenusa. [Dica: para calcular a raiz quadrada use a
//função sqrt(), definida no arquivo math.h]. 
#include <stdio.h>
#include <math.h>

main(){
 float a, b, c;
printf ("\n qual a medida do cateteo a?  "); 
scanf ("%f", &a); 

printf ("\n qual a medida do cateto b?  "); 
scanf ("%f", &b);
	
c = pow(a,2) + pow(b,2); 
c = sqrt (c); 

printf ("\n a hipotenusa vale: %f", c); 

getch(); 
return 0; 
}
