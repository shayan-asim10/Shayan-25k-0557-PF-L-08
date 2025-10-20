#include <stdio.h>

int main(){
	int m1[3][4] = {{1,80,84,91,96}, {2,81,84,89,93}, {3,84,86,79,98}};
	int transpose[4][3], i,j;
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			transpose[i][j] = m1[j][i];
		}
	}
	printf("\n");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
}
