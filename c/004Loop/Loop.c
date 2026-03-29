
int main(){
    // int i = 0;
    // while(1){
    //     printf("i: %d\n", i);
    //     i++;
    //     if(i > 10){
    //         break;
    //     }
    // }

    for(int i = 0; i < 10; i++){
        if(i == 0){
            printf("  |") ;
        }else {
            printf(" %d", i);
        }
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        if(i == 0){
            continue;
        }else{
            printf(" %d|", i);
        }
        for(int j = 1; j < 10; j++){
            printf(" %d", j * i);
        }
        printf("\n");
    }

    int k = 3;
    do {
        printf("Hello, World!\n");
    } while(2 > k);

    
}