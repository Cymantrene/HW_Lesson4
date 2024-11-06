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
    scanf("%d%d%d", &a, &b, &c);

    if ((a>b)&&(a>c)) printf("%d",a);
    if ((b>a)&&(b>c)) printf("%d",b);
    if ((c>a)&&(c>b)) printf("%d",c);
    if ((a==b) && (a==c)) printf("%d",c);
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
