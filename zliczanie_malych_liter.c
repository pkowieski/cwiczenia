#include <stdio.h>

int main(){

	const char ciag_znakow[]="Ala ma malego kotka";
	int histogram[26]={0};
	int licznik=0;
	char znak;

	while((znak=ciag_znakow[licznik])!=0){
		if((znak>='a') && (znak<='z')){
			++histogram[znak - 'a'];
		}
		++licznik;
	}

	for(int x=0;x<26;x++){
		printf("%c - %d \n",'a'+x,histogram[x]);
		}
	return 0;
}
