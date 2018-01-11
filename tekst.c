#include <stdio.h>

int main(){

	char *Napis="Waniki";
//	*(Napis+1)='y';  Tu jest błąd! Nie można poprawić tak zdefioniowanego tekstu

	printf("%s\n",Napis);

	char Tekst[20]={"Pymołka"}; // Gdy tekst jest tak zdefioniowany można poprawiać. 
	Tekst[1]='o';
	*(Tekst+3)='y';

	printf("%s\n",Tekst);

	return 0;
}

