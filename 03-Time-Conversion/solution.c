#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    char period = s[8];

    if (period == 'A') {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }

    char* result = (char*)malloc(9 * sizeof(char));
    snprintf(result, 9, "%02d:%c%c:%c%c", hour, s[3], s[4], s[6], s[7]);
    return result;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    char s[11];
    if (scanf("%10s", s) == 1) {
        char* result = timeConversion(s);
        if (fptr) {
            fprintf(fptr, "%s\n", result);
            fclose(fptr);
        } else {
            printf("%s\n", result);
        }
        free(result);
    }
    return 0;
}
