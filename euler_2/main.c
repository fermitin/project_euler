#include <stdio.h>

void main(){
	int p = 1;     //Previous fib number
	int sum = 2;   //Sum of even fib numbers
	int fib = 0;   //Current fibonacci number
	
    for(int i  = 2; i < 4000000;){
		fib = i + p;
		p = i;
		i = fib;
		if(fib % 2 == 0){
			sum += fib;
		}
	}

	printf("Sum of even fibonacci numbers: %d\n", sum);
}
