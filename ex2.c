/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long ConcatNum(int, int);

int main(){
	int n1, n2;
	printf("Enter First Number:");
	(void)scanf("%d", &n1);

	printf("Enter Second Number:");
	(void)scanf("%d", &n2);

	printf("%d\n", ConcatNum(n1, n2));
	return(0);
}
long ConcatNum(int num1, int num2){
	long Ten = 10;
	while (num2 >= Ten){
		Ten *= 10;
	}
	return (num1 * Ten + num2);
}
