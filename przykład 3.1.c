#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Podaj dwie liczby: " );
	scanf(" %d %d",&a,&b);
	(a==b) ? printf("Liczby sa rowne!"):printf("Liczby sa rozne!");
	return 0;
}
