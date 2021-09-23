// Dada um temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius. [Dica: C = (F – 32) * (5 / 9)]. 

#include <stdio.h>

#include <conio.h>

main(){
	
	
	float f, c, c1; 
	
	getch(); 
	
	printf ("\n digite uma temperatura em fahrenheit:  "); 
	scanf ("%f", &f); 
	
	printf ("%f", f); 
	
	c = (f - 32) * 0.55555;  
	
	printf ("O valor em celsius e: %f", c); 
	
	//system ("cls"); fecha a janela apos a excecucao 
 
	return 0; 
}
