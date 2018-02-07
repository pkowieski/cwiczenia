#include <stdio.h>
#include <stdbool.h>



int main()
{
bool dalej=true;
int i,gdzie=-1;
const int szukany=333;
const int N=10;
int tab[N]={0,1,333};

for(i=0;i<N&&dalej;++i)
{
	if(tab[i]==szukany)
	{
		dalej=false;
	}

}
gdzie=i;
printf("%d\n",gdzie);
return 0;
}
