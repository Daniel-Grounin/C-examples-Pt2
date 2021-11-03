/* Assignment 2: Author- Daniel Grounin*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int WhoIsBigger();
long ConcatNum(int, int);
int prime(int num);
int IDChecker(int);
int PrintDiamond(int);

int main(){
	int case_num;
	int B_num;
	int n1, n2;
	int num;
	int number;
	int size;
	do{  //menu of 5 exercises
		printf("\n\nWelcome, Choose Your Path : \n1 - Third\n2 - Compose \n3 - Primes\n4 - ID \n5 - Diamond \n6 - Quit ");
		(void)scanf("\n%d", &case_num);

		switch (case_num){
		case 1://Third
			printf("%d", WhoIsBigger());
			break;

		case 2://Compose
			printf("Enter First & Second Number:");
			(void)scanf("%d%d", &n1, &n2);
			printf("\nThe Concat Is %d", ConcatNum(n1, n2));
			break;

		case 3://Primes
			printf("Please Enter a Positive Number:");
			(void)scanf("%d", &num);
			prime(num);
			break;

		case 4://ID
			printf("Enter Your ID:");
			(void)scanf("%d", &number);
			printf("\n%d\n", IDChecker(number));
			break;

		case 5://Diamond
			printf("Enter Diamond Size:");
			(void)scanf("%d", &size);

			PrintDiamond(size);
			break;

		case 6://Quit program
			return 0;
			break;
		default: //out of applicable choises
			printf("\n\aError, not an applicable choise!\n\n");
			break;
		}
	} while (case_num <= 6 || case_num > 0);
}

int WhoIsBigger(){ //function that able to tell who is bigger in descending order
	printf("\nEnter set of numbers \n`to stop enter Negative number`\n");
	int current = 0, first = 0, second = 0, third = 0;

	while (current > -1){ //negative number for exit scan loop
		(void)scanf("%d", &current);
		if (current > first) { //current is the lastest number entery by user
			first = current; //saving the current in temporary , and decide if it is greater or not from the last scan and so on
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
	printf("\nFirst Big number is %d\nSecond Big number is %d\nThird Big number is %d\n\n", first, second, third);
}

long ConcatNum(int num1, int num2){ //concaticate between two numbers with help of mulitiplying by ten and adding the next entered number 
	long Ten = 10;
	while (num2 >= Ten){
		Ten *= 10;
	}
	return ((num1 * Ten + num2));
	printf("\n\n");
}
//prime nubers are the numbers that divides only by themselves or by 1 //starting from the minimum devider (2) and going on ++ with the dividers until num/num=1
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

int IDChecker(int number) { //function checks if id is correct 
	int ID = number, removed_digit, last_digit, counter = 0, fir_digit = 0, sec_digit = 0, sum = 0, Two_Digits_calc = 0;
	last_digit = number % 10; //take the lst digit

	while (number != 0){ //checks how many digits entered
		number /= 10;
		counter++;
	}
	ID /= 10;
	counter--; //remove counter last digit (for BIKORET) 9-1 = 8
	if (counter < 7 || counter > 8){ //real time check for number of digits after removing 'SIFRAT BIKORET'
		printf("\aINVALID ID!\n");
		return 0;
	}
	else{
		while (counter >= 0){ //until counter is not zero 
			counter--;
			removed_digit = ID % 10;
			Two_Digits_calc = removed_digit * 2; //if removed digit is greater||equal to 10 ,needed sum of seperated digits(&anyway the max posebillity is 9*2=18)

			if (Two_Digits_calc > 9){
				fir_digit = Two_Digits_calc / 10;
				sec_digit = Two_Digits_calc % 10;

				sum += fir_digit + sec_digit; //sum + (sum of seperated digits)
				ID /= 10;
			}
			else{
				sum += Two_Digits_calc; //regular adding to sum
				ID /= 10;
			}
			counter--; //keep removing
			removed_digit = ID % 10;
			sum += removed_digit;
			ID /= 10;
		}
	}
	if ((sum + last_digit) % 10 == 0){ //if sum + last digit is a round number ,the Id should be correct
		printf("Y\n");
		return 1;
	}
	else{
		printf("N\n");
		return 0;
	}
}

int PrintDiamond(int size){
	while (size < 11){ //diamond size is max 10 astrix
		for (int i = 1; i <= size; i++){  //print spaces from the start to upper part
			for (int j = i; j <= size; j++){
				printf(" ");
			}
			for (int k = 1; k <= 2 * i - 1; k++){ //print astrixes 
				if (k == 1 || k == (2 * i - 1))
					printf("*");
				else
					printf(" "); //print spaces between astrixes
			}
			printf("\n");
		}
		for (int i = size - 1; i >= 1; i--){ //print spaces from the start to lower part
			for (int j = size; j >= i; j--){
				printf(" ");
			}
			for (int k = 1; k <= 2 * i - 1; k++){
				if (k == 1 || k == 2 * i - 1) //print astrixes 
					printf("*");
				else
					printf(" "); //print spaces between astrixes
			}
			printf("\n"); //new line
		}
		return 0;
	}
	printf("\n\aERROR, Size should NOT be Greater then 10.\n\n"); //explained in the beggining
	printf("Try Again.\n\n");
}


