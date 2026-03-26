#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
    char formula[100] = "";
    char cal;
    // int cal = calculation();
    printf("\n:Please enter the formula");
    scanf("%s", formula);

    printf("文字列長は: %c\n", formula[3]);
    printf("strlen formula: %d", strlen(formula));
    for(int i = 0; i < strlen(formula); i++){
        // 数字以外の文字判定
        if(formula[i] < '0' || formula[i] > '9'){
            cal = formula[i];
            printf("cal: %c\n", cal);
        }else{
            printf("数字: %c\n", formula[i]);
        }

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

