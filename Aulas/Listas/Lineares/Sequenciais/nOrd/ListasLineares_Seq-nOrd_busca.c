#include <stdio.h>
#include <stdbool.h>

bool Buscar (int lista[], int n, int x) // O(n)
{
	for (int i=0; i<n; i++) // O(n)
	{
		if (lista[i] == x)
		{
			return true;
		}
	}
	return false;
}


int main (void)
{
	int lista[8] = {1, 2, 4, 623, 64, 2, 3, -23};
	printf("O número -23 encontra-se na lista? %b\n", Buscar(lista, 8, -23));
	printf("O número 440 encontra-se na lista? %b\n", Buscar(lista, 8, 440));

	return 0;
}
