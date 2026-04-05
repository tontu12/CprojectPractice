
int main() {
    int x;
    double y;
    int adress[5];
    
    //	変数aのアドレスを表示
    printf("Adress of x: %p\n", (void*)&x);
    printf("Adress of y: %p\n", &y);
    printf("Adress of adress[0]: %p\n", &adress[0]);
    printf("Adress of adress[1]: %p\n", &adress[1]);
    printf("Adress of adress[2]: %p\n", &adress[2]);
    printf("Adress of adress[3]: %p\n", &adress[3]);
    printf("Adress of adress[4]: %p\n", &adress[4]);

    return 0;
}