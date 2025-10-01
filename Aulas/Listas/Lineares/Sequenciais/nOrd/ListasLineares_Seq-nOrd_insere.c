#include <stdio.h>


void Inserir (int lista[], int* n, int x) // teta(1)
{
	// Assume-se um tamanho vigente inferior à capacidade do vetor para utilizar-se dessa função.
	
	lista[*n] = x;
	*n += 1;
}


int main (void)
{
	int lista[100] = {1, 2, 4, 623, 64, 2, 3, -23};
	int n = 8;
	
	Inserir(lista, &n, 12);
	Inserir(lista, &n, 8);
	Inserir(lista, &n, 1);
	
	printf("array:\n");
	for (int i=0; i<=n+8; i++) // Printando mais espaços apenas para mostrar que, ao declarar um vetor, seus elementos recebem 0 como valor até que outro os sejam atribuído
	{
		printf("array[%d]: %d \n", i, *(lista+i));
	}
	printf("...\n\n'n' value: %d \n", n);
	
	return 0;
}
