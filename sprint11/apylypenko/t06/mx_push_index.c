#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    int size = 0;
    t_list *temp = *list;

    for (; temp != NULL; temp = temp->next) {
        size++;
    }

    if (index >= size - 1) {
        mx_push_back(list, data);
    } else if (index <= 0) {
        mx_push_front(list, data);
    } else {
        temp = *list;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        t_list *new_node = mx_create_node(data);
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
