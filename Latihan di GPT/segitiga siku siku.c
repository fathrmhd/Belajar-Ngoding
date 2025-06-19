#include <stdio.h>

int main(){
	int b;
	scanf ("%d", &b);
	for (int i=1; i <= b; i++ ){
		for (int j = 1 ; j <= i; j++){
			if (j == 1 || j == i || i == b){
				printf("*");	
			}
				else {
					printf(" ");
				}
			
		}
		printf("\n");
	}

}