#ifndef MULTI_H
# define MULTI_H

# include <pthread.h>
# include <stdlib.h>
# define N_THREADS 4 

typedef struct		s_vec2
{
	double		x;
	double		y;
}			t_vec2;

typedef struct		s_startend
{
	t_vec2		start;
	t_vec2		end;
}			t_startend;


typedef	struct		s_data
{
	// fill
	t_startend	thread_range;
	int		winwidth;
	int		winheight;
}			t_data;					


void            ft_multi_thread(t_data *data, void *(*f)(void *));               

#endif
