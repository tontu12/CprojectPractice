
int main() {
    int x = 10; // int型変数
    int *p; // 変数xへのポインタを用意
    // p = &x; // ポインタ変数pに変数xのアドレスを代入
    printf("ポインタ変数pのアドレス先の値：%d\n", *p);
    return 0;
}