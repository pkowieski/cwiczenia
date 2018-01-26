#include <stdio.h>
#include <stdbool.h>
struct zespolona
{
	double re;
	double im;
};

struct zespolona dodaj (struct zespolona x,struct zespolona y, struct zespolona *wynik)
{
	wynik->re = x.re + y.re;
	wynik->im = x.im + y.im;

}

struct zespolona odejmij (struct zespolona x,struct zespolona y)
{
        struct zespolona wynik;
        wynik.re = x.re - y.re;
        wynik.im = x.im - y.im;

        return wynik;
}

struct zespolona mnoz (struct zespolona x, struct zespolona y) {

	struct zespolona wynik;
        wynik.re = x.re*y.re - x.im*y.im;
        wynik.im = x.re*y.im + x.im*y.re;

        return wynik;
}

struct zespolona dziel (struct zespolona x, struct zespolona y, bool *error) {

	struct zespolona wynik={0.0,0.0};
        double k;
        k=y.re*y.re+y.im*y.im;

        if (k!=0.0) {
        wynik.re = x.re*y.re + x.im*y.im/k;
        wynik.im = x.re*y.im - x.im*y.re/k;
		*error=false;
             	return wynik;
         }
         else {
             *error=true;
		return wynik;
             }
} 


int main()
{
	bool error;
	struct zespolona a={3.4, 2.7}, b={1.2, 2.3};
	struct zespolona wynik;
	wynik=dodaj(a,b,&wynik);
	if (!error){
		printf("%.2lf,%.2lf / %.2lf,%.2lf = %.2lf,%.2lf\n",a.re,a.im,b.re,b.im,wynik.re,wynik.im);
	}else{
		printf("Dzielenie przez 0!\n");
	}
	return 0;
}
