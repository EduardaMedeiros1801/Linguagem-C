#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define pi 3.14

main (){
	setlocale(LC_ALL, "Portuguese");
	
	float raio, perimetro;
	printf("\n Qual a medida do raio?  ") ; 
	scanf("%f", &raio); 
	
	perimetro = 2*pi*raio; 
	
	printf("\n o perímetro é %f", perimetro); 
	
	getch(); 
	system("cls"); //clrscr(), serve para limpar a tela 
	system("pause");
  	return 0;
	
}

