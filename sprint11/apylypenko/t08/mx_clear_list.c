#include "list.h"

void mx_clear_list(t_list **list){
	while((*list)->next != NULL){
		t_list *temp = (*list)->next;
		free(*list);
		*list = temp;
	}
	*list = NULL;
}
