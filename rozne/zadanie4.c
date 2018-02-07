#include <stdio.h>



int main()
{

	char jednostka;
	float wartosc,wynik_mila,wynik_kilometr,wynik_jard;
	printf("Podaj jednostke, ktora mam przeliczyc (m - mila, k - kilometr lub j - jard)\n");scanf("%c", &jednostka);
	printf("Podaj wartosc: \n");scanf("%f", &wartosc);
	if(jednostka=='k'){
		wynik_mila=wartosc/1.609;
		wynik_jard=wynik_mila*1760;
		printf("Podana wartosc w kilometrch to inaczej %.3f w milach i %.3f w jardach\n", wynik_mila, wynik_jard);
	}else if(jednostka=='m'){
		wynik_kilometr=wartosc*1.609;
		wynik_jard=wartosc*1760;
		printf("Podana wartosc w milach to inaczej %.3f w kilometrach i %.3f w jardach\n", wynik_kilometr, wynik_jard);
	}else if(jednostka=='j') {
		wynik_mila=wartosc/1760;
		wynik_kilometr=wynik_mila*1.609;
		printf("Podana wartosc w jardach to inaczej %.3f w milach i %.3f w kilometrach\n", wynik_mila, wynik_kilometr);
}
	else
	printf("Nie rozpoznaje jednostki!!!\n");

return 0;
}
