#include <stdio.h>
#include <string.h>

int main(int liczba_slow, char *tabela_slow[]){

	char wyjscie[200]={0};

	for(int slowo=1; slowo<liczba_slow; slowo++){
		strcat(wyjscie,tabela_slow[slowo]);
	}
	printf("%s\n", wyjscie);

	return 0;
}
