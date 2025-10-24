#include <stdio.h>

int main() {
    int image[3][3][3] = {
        { {120, 60, 200}, {255, 100, 150}, {80,  90,  100} },
        { {30,  90, 180}, {200, 220, 240}, {50,  60,  70} },
        { {100, 150, 200}, {90, 80, 70},   {255, 255, 255} }
    };

    int i, j, k;
    int total = 0, count = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) { 
                total += image[i][j][k];
                count++;
            }
        }
    }

    float avg = (float) total / count;

    printf("Average Color Intensity: %.2f\n", avg);

    return 0;
}
