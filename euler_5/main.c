/*
Runs a loop for infinity, generating numbers. In that loop, every number is
checked, if it is divisible by all 20 ints, if so, set the number to the 
awnser and leave the loops
*/

#include <stdio.h>

void main(){
	int ats = 0;
	for(int i = 20; ; i++){
		for(int z = 1; i % z == 0; z++){
			if(i % z == 0 && z == 20){
				ats = i;
				break;
			}
		}
		if(ats > 0){
			break;
		}
	}

	printf("Smallest number: %d \n", ats);
}
