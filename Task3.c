#include <stdio.h>
int main(){
	int robot[3][2][2] = {
	{{1,2},{-3,4}},
	{{5,6},{7,8}},
	{{-7,8},{9,10}}
	};
	int i,j,k;
	for(k=0; k<3; k++){
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(robot[k][i][j] < 0){
				robot[k][i][j] *= (-1);
			}
			printf("%d ", robot[k][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
