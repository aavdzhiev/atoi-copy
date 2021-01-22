#include <stdio.h>

int atoiCopy(char s[]);

int main(void) {
    char str1[] = "-123";
    printf("Result: %d", atoiCopy(str1));

    return 0;
}

int atoiCopy(char s[]) {
    int result = 0;
    int i = 0;
    int p = 1;

    // Check if the number is negative and modify p
    if (s[0] == '-') {
        i = 1;
        p = -1;
    }

    for (; s[i] != '\0'; i++) {
        result = result * 10 + (s[i] - '0');
    }

    result *= p;

    return result;
}
