#include <stdio.h>

int main(){
	int m1[2][2] = {{20000, 30000},{35000, 21000}};
	int m2[2][2] = {{10000, 20000},{25000,21000}};
	int result[2][2], i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			result[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("Total sales in Half year: \n");
	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
