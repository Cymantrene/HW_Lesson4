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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c && b<c) printf ("YES\n");
    else printf("NO\n");

    return 0;
}


