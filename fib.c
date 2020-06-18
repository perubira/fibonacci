/******************************************************************************

Calcula um termo da série de Fibonacci

*******************************************************************************/


#include <stdio.h>

int main ()
{
  int i, n, t1 = 0, t2 = 1, proxTermo;
  char term;
  
  printf ("=== Calculo de um termo da serie de Fibonacci ===\n\n");
  printf ("Digite o numero do termo a ser calculado: ");
  
  if (scanf ("%d%c", &n, &term) != 2 || term != '\n')
    printf ("\nERRO!\nInsira um numero inteiro.");
  else {
      if (n < 0) {
	  printf("\nERRO!\nInsira um numero inteiro igual ou maior que zero.");
	}
      else {
	  printf ("\nTermo[%d]: ", n);

	  if (n == 0)
	    printf (" %d ", 0);
	  else{
	      for (i = 1; i <= n; i++){
		  proxTermo = t1 + t2;
		  t1 = t2;
		  t2 = proxTermo;
		}
		printf (" %d", t1);
	    }
	}
    }

  printf ("\n\n=== FIM ===");

  return 0;
}
