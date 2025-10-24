#include <stdio.h>

int main(){
    int seating[5][5] = {0};
    int i, j;
    for(i=0; i<5;i++){
        for(j=0;j<5;j++){
            printf("For seat [%d][%d], enter 1 or 0:  ", i, j);
            scanf("%d", &seating[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5;j++){
            printf("%d ", seating[i][j]);
        }
        printf("\n");
    }
    // to check if identity matrix
    int identity = 1;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i == j){
                if(seating[i][j] != 1){
                    identity = 0;
                    break;
                }
        }
        else if(seating[i][j] != 0){
                    identity = 0;
                    break;
            }
    }
}
    if(identity){
        printf("The seating arrangement is an identity matrix.\n");
    }
    else {
        printf("The seating arrangement is not an identity matrix.\n");
    }
}