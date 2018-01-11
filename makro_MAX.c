#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))



int main(){

	const int liczba1=1000;
	const int liczba2=2;

	printf("MAX = %d\n",MAX(liczba1,liczba2));
        printf("MIN = %d\n",MIN(liczba1,liczba2));

	return 0;
}
