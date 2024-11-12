(i) an array is a collection of elements of the same data  type stored in contiguous memory locations.

(ii)int scores[2][2] = {{65, 92}, {84, 72}, {35, 70}, {59, 67};

#include <stdio.h>
int main() {
    //defining and initializing 2D array named scores
    int scores[4][2] = {{65, 92}, {84, 72}, {35, 70}, {59, 67}};
    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 2; j++) {
    //printing the elements using a nested for loop
    printf("%d ", scores[i][j]); }
    printf("\n"); }
    return 0;
}
