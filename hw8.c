#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
    //setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
	int a,b,c,d,e,min;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
/*
    max = a>b ? a : b;
    max = max>c ? max : c;
    max = max>d ? max : d;
    max = max>e ? max : e;
*/
    min = a<b ? a : b;
    min = min<c ? min : c;
    min = min<d ? min : d;
    min = min<e ? min : e;


    printf("%d", min);
    return 0;
}


