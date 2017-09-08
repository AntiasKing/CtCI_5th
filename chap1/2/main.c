#include <string.h>
#include <stdio.h>

void reverse(char *str) {
    char tmp;
    int len;

    len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        tmp = str[i];
        str[i] = str[len - (i + 1)];
        str[len - (i + 1)] = tmp;
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        reverse(argv[1]);
        printf("%s\n", argv[1]);
        return 0;
    }
    printf("Not enougth arguments\n");
    return 1;
}
