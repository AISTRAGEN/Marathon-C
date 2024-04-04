#include "list.h"

t_list* mx_create_node(void* data){
	t_list *newlist = malloc(sizeof(t_list));
	newlist->data = data;
	newlist->next = NULL;
	return newlist;
}
