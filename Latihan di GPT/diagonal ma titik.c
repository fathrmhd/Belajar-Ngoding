#include <stdio.h> 

int main(){
	int b=10;

	for (int i = 1; i <= b; i++){
		for (int j = 1; j <= b; j++){
			if(i == j || i + j == b + 1){
				printf("*");
			}
				else{
					printf(".");
				}
		}
		printf("\n");
	}
}