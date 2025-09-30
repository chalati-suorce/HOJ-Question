#include <stdio.h>

int main() {
    char a, b, c;
    char temp;  
    while (scanf("%c%c%c", &a, &b, &c) != EOF) {
        getchar();
        char arr[] = {a, b, c};
        for (int i = 0; i < 2; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (arr[0] > arr[1]) {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        printf("%c %c %c\n", arr[0], arr[1], arr[2]);
    }  
    return 0;
}
