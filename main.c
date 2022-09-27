#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 0, y = 0, result;
	
	printf("input two integers: ");
	result = scanf_s("%d %d", &x, &y);
	
	printf("+ result is : %d\n", x+y);	
	printf("- result is : %d\n", x-y);
	printf("* result is : %d\n", x*y);
	printf("/ result is : %d\n", x/y);
	printf("%% result is : %d\n", x%y);
	
	return 0;
}
