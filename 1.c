#include <stdio.h>
#include <stdlib.h>

int main(int liczba_slow, char *tabela_slow[])
{
	double x;
	double wynik=0.0;
	double potega_x=1.0;
	if(liczba_slow>2){

		x=atof(tabela_slow[1]);
		for(int licznik=2; licznik<liczba_slow; ++licznik){
			wynik+=potega_x*atof(tabela_slow[licznik]);
			potega_x*=x;
		}
		printf("Wynik to: %lf\n",wynik);
	}else{
		printf("Niepoprawna liczba parametrów\n");}
	return 0;
}
