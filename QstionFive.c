#include <stdio.h>
#include <string.h>

int main() {
    // String de entrada 
    char str[] = "Cada qual sabe amar a seu modo";
    int length = strlen(str);

    // Exibindo a string original
    printf("String original: %s\n", str);

    // Invertendo a string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Exibindo a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
