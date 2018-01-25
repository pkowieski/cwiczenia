#include <stdio.h>
#include <stdbool.h>

#define N 11

int main(){

	int tab_sort[N]={1,2,4,5,7,8,10,11,12,14,15};
	int poczatek=0;
	int koniec=N-1;
	int srodek;
	int szukana=3;
	bool znalazlem=false;
	srodek=(poczatek+koniec)/2;

	while(znalazlem!=true && poczatek<=koniec){
		if(tab_sort[srodek]==szukana){
			znalazlem=true;
		}else{
			if(tab_sort[srodek]>szukana){
				koniec=srodek-1;
			}else{
				poczatek=srodek+1;
			}
		}
	}
	if(znalazlem==true){
		printf("Znalazle. Index: %d\n",srodek);
	}else{
		printf("Element nie istnieje w tablicy\n");
	}
	return 0;
}

