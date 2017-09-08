#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// without additional data structures
// int checkString(char *str) {
//     for (int i = 0; i < strlen(str) - 1 ; i++) {
//         for (int j = i + 1; j < strlen(str); j++) {
//             if (str[i] == str[j])
//                 return 1;
//         }
//     }
//     return 0;
// }

// with additional data structures
int checkString(char *str) {
    char ascii[256];

    for (int i = 0; i < strlen(str); i++) {
        ascii[str[i]] += 1;
        if (ascii[str[i]] > 1)
            return 1;
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc > 1)
        return (checkString(argv[1]));
    printf("Not enougth arguments\n");
    return (1);
}
