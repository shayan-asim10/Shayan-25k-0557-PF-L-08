#include <stdio.h>

int main() {
    int cities, days, times = 3;
    float temp[10][10][3];
    float max[10];
    int i, j, k;

    printf("Enter number of cities: ");
    scanf("%d", &cities);
    printf("Enter number of days: ");
    scanf("%d", &days);
    for(i = 0; i < cities; i++) {
        printf("\n--- For city %d ---\n", i + 1);
        for(j = 0; j < days; j++) {
            printf(" Day %d:\n", j + 1);
            printf("  Morning temperature: ");
            scanf("%f", &temp[i][j][0]);
            printf("  Afternoon temperature: ");
            scanf("%f", &temp[i][j][1]);
            printf("  Night temperature: ");
            scanf("%f", &temp[i][j][2]);
        }
    }
    for(i = 0; i < cities; i++) {
        max[i] = temp[i][0][0];
        for(j = 0; j < days; j++) {
            for(k = 0; k < times; k++) {
                if(temp[i][j][k] > max[i]) {
                    max[i] = temp[i][j][k];
                }
            }
        }
    }
    printf("\nHighest temperatures recorded:");
    for(i = 0; i < cities; i++) {
        printf("\nCity %d: %.2f C", i + 1, max[i]);
    }

    return 0;
}
