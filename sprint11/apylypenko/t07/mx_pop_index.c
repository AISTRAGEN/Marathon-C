#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if (*list == NULL)
        return;

    int size = 0;
    t_list *temp = *list;

    for (; temp != NULL; temp = temp->next) {
        size++;
    }

    if (index >= size - 1) {
        mx_pop_back(list);
    } else if (index <= 0) {
        mx_pop_front(list);
    } else {
        temp = *list;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        t_list *temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
    }
}
