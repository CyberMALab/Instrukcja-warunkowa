#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Podaj dwie liczby: " );
	scanf(" %d %d",&a,&b);
	if(a==b)
		printf("Liczby sa rowne!");
	else 
		printf("Liczby sa rozne!");
	
	return 0;
}
