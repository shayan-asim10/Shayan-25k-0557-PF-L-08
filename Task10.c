#include <stdio.h>

int main(){
    int hospital[10][20][20], rowSum[10][20], colSum[10][20];
    int wards, vitals, patients,i,j,k;
    printf("Enter number of wards: ");
    scanf("%d", &wards);
    printf("Enter number of patients per ward: ");
    scanf("%d", &patients);
    printf("Enter vital signs per patient: ");
    scanf("%d", &vitals);
    for(k = 0; k<wards; k++){
        for(i = 0; i<patients; i++){
            for(j=0; j<vitals; j++){
                printf("Enter patient vital sign %d for Ward %d, Patient %d: ", j, k, i);
                scanf("%d", &hospital[k][i][j]);
            }
        }
    }
    for(i = 0; i < wards; i++){
        for(j = 0; j < patients; j++)
            rowSum[i][j] = 0;
        for(k = 0; k < vitals; k++)
            colSum[i][k] = 0;
        for(j = 0; j < patients; j++) {
            for(k = 0; k < vitals; k++) {
                rowSum[i][j] += hospital[i][j][k];
                colSum[i][k] += hospital[i][j][k];
            }
        }
        printf("\nWard %d Result", i);

        printf("\nSum of each row");
        for(j = 0; j < patients; j++) {
            printf("\nPatient %d total = %d", j, rowSum[i][j]);
        }

        printf("\nSum of each column (each vital sign total across patients):");
        for(k = 0; k < vitals; k++) {
            printf("\nVital %d total = %d", k, colSum[i][k]);
        }
    }
    return 0;
}