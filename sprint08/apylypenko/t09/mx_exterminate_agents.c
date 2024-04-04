#include "only_smiths.h"
#include <stdlib.h>

void mx_exterminate_agents(t_agent ***agents) {
	for(int i = 0; (*agents)[i] != NULL; i++) {
		free((*agents)[i]->name);
		(*agents)[i]->name = NULL;
	}
	free(*agents);
	*agents = NULL;
}

