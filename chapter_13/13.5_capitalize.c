#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]) {
    while (*str++ != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = toupper(*str);
        }
    }
}

int main(int argc, char *argv[]) {
    char str[] = "12 litTle elfs Went Through This BUSH";
    capitalize(str);
    printf("Capitalizing:\n%s\n", str);
    return 0;
}
