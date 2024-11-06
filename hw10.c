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
int n;
//printf("¬ведите номер мес€ца:\n1-€нварь\n2-февраль\n3-март\n4-апрель\n5-май\n6-июнь\n7-июль\n8-август\n9-сент€брь\n10-окт€брь\n11-но€брь\n12-декабрь\n");
scanf("%d", &n);
if(n==1 || n==2 || n==12)   printf("winter");
if(n==3 || n==4 || n==5)    printf("spring");
if(n==6 || n==7 || n==8)    printf("summer");
if(n==9 || n==10 || n==11)    printf("autumn ");

return 0;
}




