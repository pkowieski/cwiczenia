#include <stdio.h>

int main(){

	char *Napis="Waniki";
//	*(Napis+1)='y';  tu jest błąd!

	printf("%s\n",Napis);

	char Tekst[20]={"Pymołka"};
	Tekst[1]='o';
	*(Tekst+3)='y';

	printf("%s\n",Tekst);

	return 0;
}

