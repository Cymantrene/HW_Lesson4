#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
 int A[5]={0},min=0,max=0, sum=0;
 for(int x = 0; x < 5; x++)
 {
 //printf("Введите %d число: ", x+1);
 scanf("%d",&A[x]);
 if(x == 0)
 {
 min = max = A[0];
 }
 else
 {
 if(A[x] < min) min = A[x];
 if(A[x] > max) max = A[x];
 }
 }
 sum = max+min;
 printf("%d\n",sum);
 //printf("Минимальное число -- %d.\n",min);
 return 0;
}
/*
	int a,b,c,d,e,max,min,sum;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    max = a>b ? a : b;
    max = max>c ? max : c;
    max = max>d ? max : d;
    max = max>e ? max : e;

    min = a<b ? a : b;
    min = min<c ? min : c;
    min = min<d ? min : d;
    min = min<e ? min : e;
    sum = max+min;
    printf("%d", sum);
	
*/


	