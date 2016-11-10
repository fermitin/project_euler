#include <stdio.h>

void main(){
	int sumSquares = 0;
	int sumNumbers = 0;
	
	//Get the sum of the squares from 1 to 100
	for(int i = 1; i <= 100; i++){
		sumSquares += i * i;
	}

	//Get the sum of the numbers 1 to 100 and square them
	for(int i = 1; i <= 100; i++){
		sumNumbers += i;
	}
	sumNumbers *= sumNumbers;

	printf("Difference of the sums: %d\n", sumNumbers - sumSquares);

}
