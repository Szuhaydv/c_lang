#include <stdlib.h>

struct node {
    struct node *next;
    int value;
};

struct node *delete_from_list(struct node *list, int n) {
    struct node **indirect = &list;
    while ((*indirect) != NULL && (*indirect)->value != n)
        indirect = &(*indirect)->next;
    if (*indirect == NULL)
        return list;
    struct node *temp = *indirect;
    *indirect = (*indirect)->next;
    free(temp);
    return list;
}
