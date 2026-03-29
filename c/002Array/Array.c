#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    for(int i = 0; i < 5; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%3d ", arr2[i][j]);
        }
        printf("\n");
    }
    
}

// isValidString(){
//     if (=="(")
//     {
//         /* code */
//     }
    
// }

// int add(int a, int b) {
//     return 0;
// }

// int subtract(int a, int b) {
//     return 0;
// }

// int multiply(int a, int b) {
//     return 0;
// }

// int divide(int a, int b) {
//     return 0;
// }

