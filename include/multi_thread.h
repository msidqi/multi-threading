#ifndef MULTI_H
# define MULTI_H

# include <pthread.h>
# include <stdlib.h>
# define N_THREADS 4 

typedef struct		s_vec2_int
{
	int		x;
	int		y;
}			t_vec2_int;

typedef struct		s_startend
{
	t_vec2_int	start;
	t_vec2_int	end;
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
