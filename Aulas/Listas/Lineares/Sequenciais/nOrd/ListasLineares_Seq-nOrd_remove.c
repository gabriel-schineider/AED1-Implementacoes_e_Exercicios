#include <stdio.h>
#include <stdbool.h>


void Remover (int lista[], int* n, int x) // teta(n)
{
	for (int i=0; i<*n; i++) // teta(n)
	{
		if (lista[i] == x) // teta(1)
		{
			lista[i] = lista[*n-1];
			lista[*n-1] = 0;
			*n -= 1;
			i--;
		}
	}
}

void Remover2 (int lista[], int* n, int x) // teta(n)
{
	int i=0;
	while (i < *n) // teta(n)
	{
		if (lista[i] == x) // if+else -> teta(1)
		{
			lista[i] = lista[*n-1];
			*n -= 1;
		}
		else
		{
			i++;
		}
	}
}


int main (void)
{
	int lista[100] = {1, 2, 4, 623, 64, 2, 3, -23};
	int n = 8;
	Remover2(lista, &n, 2);
	
	printf("array	:\n");
	for (int i=0; i<n; i++)
	{
		printf("array[%d]: %d \n", i, *(lista+i));
	}
	printf("\n'n' value: %d \n", n);
	
	return 0;
}
