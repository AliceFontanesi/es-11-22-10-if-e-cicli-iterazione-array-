#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    int n1 = 0;
    int n2;
    int cond;
	do
	{
		printf("Inserisci un numero: ");
		scanf("%d", &n);
	} while (n < 0);
	n2 = n - 1;
    if(n % 2 == 0)
        cond = n/2;
    else
        cond = n/2 + 1;
	do
	{
		printf("%d + %d = %d\n", n1, n2, n);
		n1++;
		n2--;
	} while (n1 < cond);
	return 0;
}




