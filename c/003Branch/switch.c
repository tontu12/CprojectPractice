#include<stdio.h>

int main(){
    int num;
    printf("1~3 please eneter : ");
    scanf("%d", &num);

    switch (num){
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
    default:
        printf("inappropriate value");
        break;
    }
    return 0;
}