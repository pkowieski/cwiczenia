#include <stdio.h>

int main()
{
	const int kwa=5;
	float macierz[kwa][kwa];

	for(int i=0;i<10;i++)
	for(int j=0;j<10;j++)
		macierz[i][j]=i==j?0:1;
        for(int i=0;i<10;i++)
        	for(int j=0;j<10;j++)
			printf("%f ", macierz[i][j]);
		printf("\n");
return 0;
}
