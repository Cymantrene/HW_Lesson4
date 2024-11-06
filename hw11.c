#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
int a,b,c;
//printf("¬ведите номер мес¤ца:\n1-¤нварь\n2-февраль\n3-март\n4-апрель\n5-май\n6-июнь\n7-июль\n8-август\n9-сент¤брь\n10-окт¤брь\n11-но¤брь\n12-декабрь\n");
scanf("%d%d%d", &a,&b,&c);
if( (a+b)>c && (a+c)>b && (c+b)>a )   printf("YES");
//else if ( ((a+b)==c) ||  ((a+c)==b) || ((b+c)==a)  ) printf("NO");
else printf("NO");
return 0;
}




