#include "ft_select.h"

void	get_tty_fd(t_env *env)
{
	char	*tmp;

	if (isatty(1))
	{
		env->fd = 1;
		return;
	}
	if (!(tmp = ttyname(ttyslot())))
	{
		ft_putendl_fd("ft_select: can't get tty name", 2);
		exit(EXIT_FAILURE);
	}
	if ((env->fd = open(tmp, O_WRONLY)) == -1)
	{
		ft_putendl_fd("ft_select: can't open tty", 2);
		exit(EXIT_FAILURE);
	}
}
