/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int IDChecker(int);

int main(){
	int ID_num;
	printf("Enter your ID\n");
	(void)scanf("%d", &ID_num);
	printf("%d\n", IDChecker(ID_num));
}

int IDChecker(int num) {
	int ID = num, removed_digit, last_digit, counter = 0, fir_digit = 0, sec_digit = 0, sum = 0, Two_Digits_calc = 0;
	last_digit = num % 10;
	while (num != 0){
		num /= 10;
		counter++;
	}
	ID /= 10;
	counter--;
	if (counter < 7 || counter > 8){
		printf("INVALID ID!\n");
		return 0;
	}
	else{
		while (counter >= 0){
			counter--;
			removed_digit = ID % 10;
			Two_Digits_calc = removed_digit * 2;

			if (Two_Digits_calc > 9){
				fir_digit = Two_Digits_calc / 10;
				sec_digit = Two_Digits_calc % 10;

				sum += fir_digit + sec_digit;
				ID /= 10;
			}
			else{
				sum += Two_Digits_calc;
				ID /= 10;
			}
			counter--;
			removed_digit = ID % 10;
			sum += removed_digit;
			ID /= 10;
		}
	}
	if ((sum + last_digit) % 10 == 0){
		printf("Y\n");
		return 1;
	}
	else{
		printf("N\n");
		return 0;
	}
}	


