#include <stdio.h>
#include <string.h>

#define MAX_L 60
#define MAX_D 40

void build_index_url(const char *domain, char *index_url);

int main(void) {
    char domain[MAX_D + 1], ch, index[MAX_L + 1];
    int len = 0;
    printf("Enter a domain name: ");
    while(len < MAX_D && (ch = getchar()) != '\n') {
        domain[len++] = ch;
    }
    domain[len] = '\0';
    build_index_url(domain, index);
    printf("%s\n", index);
    return 0;
}

void build_index_url(const char *domain, char *index_url) {
    char *http = "http://www.";
    char *html = "/index.html";
    char *full;
    strcat(strcat(strcpy(index_url, http), domain), html);
}
