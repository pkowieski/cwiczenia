#include <stdio.h>


int main()
{

	int a,b,i;
	int wynik=0;
	printf("Podaj a: \n");
	scanf("%d", &a);
	printf("Podaj b: \n");
	scanf("%d", &b);
	for(i=0;i<b;i++)
		wynik+=a;
	printf("Wynik mnożenia = %d\n",wynik);

	return 0;
}
