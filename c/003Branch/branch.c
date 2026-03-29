#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("n1 is greater than n2\n");
    }
    else if(n1 < n2){
        printf("n1 is less than n2\n");
    }
    else{
        printf("n1 is equal to n2\n");
    }

    int n3, n4;
    printf("Enter n3: ");
    scanf("%d", &n3);

    printf("Enter n4: ");
    scanf("%d", &n4);
    
    n3 > n4 ? printf("n3 is greater than n4\n") : printf("n3 is less than or equal to n4\n"); 
}