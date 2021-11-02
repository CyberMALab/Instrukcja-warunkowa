#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Podaj dwie liczby: " );
	scanf(" %d %d",&a,&b);
	int c = (a==b) ? a : b ;
	return 0;
}

