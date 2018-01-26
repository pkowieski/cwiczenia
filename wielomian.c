#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int liczba_slow, char *tabela_slow []){
	double x;
	double wynik = 0.0;				//przy uruchomieniu nalezy wpisac 4 parametry, na podstawie ktorych ma liczyc
	double potega_x = 1.0;
	
	if (liczba_slow > 2){
	
		x = atof(tabela_slow[1]); 		//atof zamienia string na float, atof - skrot "a to float", atos - "a to string"
	
		for (int licznik=2; licznik < liczba_slow; ++licznik){
			wynik +=potega_x * atof(tabela_slow[licznik]);
			potega_x *= x;
		
		}
	
		printf("Wynik: %lf\n", wynik);
	}
	else {printf("Niepoprawna liczba parametrow!\n");
	}
	
	return 0;
}
