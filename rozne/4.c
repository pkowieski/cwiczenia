#include <stdio.h>

int main()
{
	int liczba;
	printf("Podaj liczbe do konwersji \n");scanf("%d",&liczba);
	printf("Wynik to: ");
	if(liczba==0){
		printf("0\n");
		return 0;
	}
	while(liczba!=0){
		printf("%d",liczba%2);
		liczba/=2;
	}
	printf("1\n");
	return 0;
}
