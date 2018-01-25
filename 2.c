#include <stdio.h>
#include <stdlib.h>
#define DOKLADNOSC 100

int main(int liczba_slow, char *tabela_slow[])
{
	if(liczba_slow==2){
		double x;
		double wynik=1.0;
		double potega_x=1.0;
		double silnia=1.0;
			x=atof(tabela_slow[1]);
			for(int licznik=1; licznik<DOKLADNOSC; ++licznik){
				potega_x*=x;
				silnia*=licznik;
				wynik+=potega_x/silnia;
			}
			printf("Wynik to: %lf\n",wynik);
	}else{
		printf("Niepoprawna liczba parametrów\n");}

	return 0;
}
