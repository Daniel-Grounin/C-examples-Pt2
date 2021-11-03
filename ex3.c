/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime(int num);

int main(){
    int num;
    printf("please enter a positive number.\n");
    scanf("%d", &num);
    prime(num);

    return 0;
}

int prime(int num){
    while (num % 2 == 0){
        printf("%d*", 2);
        num /= 2;
    }
    for (int deviser = 3; deviser > 2; deviser += 1){
        while (num % deviser == 0){
            printf("%d*", deviser);
            num /= deviser;
        }
    }
}
