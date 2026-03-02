#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int count = 1;
    int opt;

    while ((opt = getopt(argc, argv, "n:")) != -1) {
        switch (opt) {
        case 'n':
            count = atoi(optarg);
            if (count <= 0) {
                fprintf(stderr, "Error: count must be a positive integer\n");
                return 1;
            }
            break;
        default:
            fprintf(stderr, "Usage: %s [-n count]\n", argv[0]);
            return 1;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("Hello, World!\n");
    }

    return 0;
}
