#include <stdio.h>

// Assinatura das funções
int bin (int n, int k);
int nFa (int n);



int main (void)
{
// Aplicação da Função Recursiva Binomial (bin)
	int e = 5;
	int p = 2;
	printf("Escolhendo %d elementos para colocar em %d posições, temos: %d configurações diferentes.\n", e, p, bin(e,p));
	

// Aplicação da Função Recursiva Fatorial (nFa)
	int f = 0;
	for (int i=f; i<f+11; i++)
	{
		printf("%d! = %d \n", i, nFa(i));
	}
	
	return 0;
}



// Funções completas

int bin (int n, int k)
{
	// assume-se n >= k >= 0
	// retorna n! / ( (n-k)! * k! )
	
	if (n == k)
	{
		return 1;
	}
	else
	{
		return bin(n-1, k) * n / ( n - k ) ;
	}
}	// fazendo a recurssão com n-1

int nFa (int n)
{
	// assume-se n >= 0
	// retorna n!
	
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return nFa(n-1) * n;
	}
}
