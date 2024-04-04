#include "list.h"

void mx_pop_front(t_list **list){
	t_list *temp = (*list)->next;
	free(*list);
	*list = temp;
}
