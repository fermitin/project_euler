#include <stdio.h>

void main(){
	int input;
	int largestPrime = 2;
	
	printf("Type number: ");
	scanf("%d", &input);

	//+1, when the input is a prime itself
	for(int i = 2; i != input+1; i++){
		//If the number
		if(input % i == 0){
			input = input / i;
			if(largestPrime < i){
				largestPrime = i;
			}
			i = 1;
		}
	}

	printf("Largest prime: %d\n", largestPrime);
}
