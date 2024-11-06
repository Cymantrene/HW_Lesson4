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
    int number,  tens, hund, units, sum;
    scanf("%d", &number);
    units =  number%10;
	tens  =  (number/10)%10;
	hund  =  number/100;
    sum = units+tens+hund;
    printf("%d",sum);
/*
    if ((units>tens)&&(units>hund)) printf("%d",units);
    if ((tens>units)&&(tens>hund)) printf("%d",tens);
    if ((hund>units)&&(hund>tens)) printf("%d",hund);
    if ((hund==tens) && (hund==units)) printf("%d",units);
*/
    return 0;
}

/*
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c) printf("%d\n",a);
	  else if (b>a && b>c) printf("%d\n",b);
	  else if (c>a && c>b) printf("%d\n",c);
	  else if (a==b && a==c && b==c) printf("%d\n",a);
	return 0;
}

*/
