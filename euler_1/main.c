#include <stdio.h>

void main(){
	int sum = 0;
	
	for(int i = 1; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			printf("i: %d \n", i);
			sum += i;
		}
	}

	printf("Sum of the multiples: %d \n", sum);
}
