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
//printf("������� ����� �����:\n1-������\n2-�������\n3-����\n4-������\n5-���\n6-����\n7-����\n8-������\n9-�������\n10-������\n11-�����\n12-�������\n");
scanf("%d%d%d", &a,&b,&c);
if( (a+b)>c && (a+c)>b && (c+b)>a )   printf("YES");
//else if ( ((a+b)==c) ||  ((a+c)==b) || ((b+c)==a)  ) printf("NO");
else printf("NO");
return 0;
}




