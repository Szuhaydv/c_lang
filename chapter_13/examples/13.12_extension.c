#include <stdio.h>
#include <string.h>

#define MAX_LEN 40

void get_extension(const char *file_name, char *extension);

int main(void) {
    char filename[MAX_LEN + 1], ch, extension[10];
    int len = 0;
    printf("Enter a filename: ");
    while (len < MAX_LEN && (ch = getchar()) != '\n') {
        filename[len++] = ch;
    }
    filename[len] = '\0';
    get_extension(filename, extension);
    printf("Extension: ");
    if (*extension == '\0') {
        printf("NONE\n");
    } else {
        printf("%s\n", extension);
    }
    return 0;
}

void get_extension(const char *file_name, char *extension) {
    while (*file_name != '\0') {
        if (*file_name == '.') {
            strcpy(extension, ++file_name);
            return;
        }
        file_name++;
    }
    *extension = '\0';
}
