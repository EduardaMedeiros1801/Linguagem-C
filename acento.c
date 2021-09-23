#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");

  system("pause");
  return 0;
}
