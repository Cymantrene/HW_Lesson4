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
    int a,b;
    scanf("%d%d", &a, &b);

    if (a>b)        printf("Above\n");
    else if (a<b)   printf("Less\n");
    else            printf("Equal\n");

    return 0;
}


