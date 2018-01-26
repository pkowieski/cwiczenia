#include <stdio.h>
#include <stdbool.h>
struct zespolona
{
	double re;
	double im;
};

struct zespolona dodaj (struct zespolona x,struct zespolona y)
{
	struct zespolona wynik;
	wynik.re = x.re + y.re;
	wynik.im = x.im + y.im;

	return wynik;
}

int main()
{

	struct zespolona a={3.4, 2.7}, b={-1.3, 2.4};
	struct zespolona wynik;
	wynik=dodaj(a,b);
	printf("%lf,%lf + %lf,%lf = %lf,%lf\n",a.re,a.im,b.re,b.im,wynik.re,wynik.im);
	return 0;
}
