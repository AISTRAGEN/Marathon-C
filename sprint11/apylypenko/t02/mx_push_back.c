#include "list.h"

void mx_push_back(t_list **list, void *data){
	t_list *temp = *list;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = mx_create_node(data);
}
