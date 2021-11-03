/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int WhoIsBigger();

int main(){
    int num;
    printf("%d", WhoIsBigger());
    return 0;
}

int WhoIsBigger(){
    int current = 0, first = 0, second = 0, third = 0;
    while (current > -1){
        (void)scanf("%d", &current);

        if (current > first){
            first = current;
            second < first;
            third < second;
        }
        else if (current > second){
            first > second;
            second = current;
            second > third;
        }
        else if (current > third){
            second > first;
            third = second;
            third = current;
        }
    }
    printf("\nFirst Big number is %d\nSecond Big number is %d\nThird Big number is %d\n", first, second, third);
}
