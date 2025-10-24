#include <stdio.h>

int main(){
    int floors, rooms, beds, empty = 0;
    printf("Enter number of floors: ");
    scanf("%d", &floors);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);
    printf("Enter number of beds per room: ");
    scanf("%d", &beds);
    int total[floors][rooms][beds];
    for(int k=0; k<floors; k++){
        for(int i=0; i<rooms; i++){
            for(int j=0; j<beds; j++){
                printf("is bed %d in room %d on floor %d occupied?(1/0): ", j+1, i+1, k+1);
                scanf("%d", &total[k][i][j]);
                if(total[k][i][j] == 0){
                    empty++;
                }
            }
        }
    }
    printf("Total number of empty beds: %d\n", empty);
    return 0;
}