#include <stdio.h>

int main() {
    int arr[3][3] = {
        {3, 2, 2},
        {4, 9, 6},
        {4, 5, 9}
    };
    for (int i = 2; i >= 0; i--) {        
        for (int j = 2; j >= 0; j--) {    
            printf("array[%d][%d] = %d \n", i,j,arr[i][j]);
        }
    }

    return 0;
}
