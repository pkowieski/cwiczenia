#include  <stdio.h>


int silnia(int x){

	if (x == 0) return 1;
        else return x * silnia(x - 1);
}

int main(){

	int a, wynik;
	printf("Podaj wartość dla jakiej mam obliczyć silnie: ");
	scanf("%d",&a);

	wynik = silnia (a);
	printf("%d! = %d\n", a, wynik);

	return 0;

}
