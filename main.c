#include "multi_thread.h"
#include <stdio.h>

// gcc -Wall -Wextra -Werror main.c ft_multi_thread.c -I include -lpthread


void	*print_thread_range(void *param)
{
	t_data *data;

	data = param;
	printf("thread_range start: x %f y %f\n", data->thread_range.start.x, data->thread_range.start.y);
	printf("thread_range   end: x %f y %f\n", data->thread_range.end.x, data->thread_range.end.y);
	return (NULL);
}


int main(void)
{

	t_data data;

	// 100 by 100 window
	data.winwidth = 100;
	data.winheight = 100;
	ft_multi_thread(&data, print_thread_range);
	return (0);
}
