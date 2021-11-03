/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int PrintDiamond(int);

int main(){
	int size;
	printf("Enter diamond size .\n");
	(void)scanf("%d", &size);
	PrintDiamond(size);
}

int PrintDiamond(int size){
	for (int i = 1; i <= size; i++){
		for (int j = i; j <= size; j++){
			printf(" ");
		}

		for (int k = 1; k <= 2 * i - 1; k++){
			if (k == 1 || k == (2 * i - 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	for (int i = size - 1; i >= 1; i--){
		for (int j = size; j >= i; j--){
			printf(" ");
		}

		for (int k = 1; k <= 2 * i - 1; k++){
			if (k == 1 || k == 2 * i - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

}


