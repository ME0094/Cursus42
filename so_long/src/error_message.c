#include "../../include/so_long.h"

int	error_message(t_data *game, char code)
{
	if (code == 'M')
		ft_printf("Error\nMap is invalid.\n");
	if (code == 'W')
		ft_printf("Error\nUnable to create window.\n");
	if (code == 'D')
		ft_printf("Error\nMap cannot be finished.\n");
	ft_annihilation(game);
	return (1);
}