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
//printf("������� ����� ������:\n1-������\n2-�������\n3-����\n4-������\n5-���\n6-����\n7-����\n8-������\n9-��������\n10-�������\n11-������\n12-�������\n");
scanf("%d", &n);
if(n==1 || n==2 || n==12)   printf("winter");
if(n==3 || n==4 || n==5)    printf("spring");
if(n==6 || n==7 || n==8)    printf("summer");
if(n==9 || n==10 || n==11)    printf("autumn ");

return 0;
}




