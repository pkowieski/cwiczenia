#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char ciag_zn[100]={"abcdef"};

	//while(ciag_zn>=0)
	//	i++;
	//alternatywnie
	for(i=0;ciag_zn[i]>0;i++) ;

	printf("Dlugosc ciagu znakow: %d\n", i);

	printf("Dlugosc ciagu znakow: %ld\n", strlen(ciag_zn));

	return 0;
}
