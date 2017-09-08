#include <string.h>
#include <stdio.h>

int isPermutation(char *orig, char *permut) {
    int lenOrig;

    lenOrig = strlen(orig);
    if (lenOrig != strlen(permut))
        return 1;
    for (int i = 0; i < lenOrig; i++) {
        if (orig[i] != permut[lenOrig - (i + 1)])
            return 1;
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc > 2) {
        return (isPermutation(argv[1], argv[2]));
    }
    printf("Not enougth arguments\n");
    return 1;
}
