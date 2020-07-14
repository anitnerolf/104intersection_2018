/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** cone
*/

#include "my.h"

void	the_cone(int ac, char **av)
{
    calculate_t	*w = malloc(sizeof(calculate_t));

    w->x = atof(av[2]) + (atof(av[5]) * get_t_cone(ac, av));
    w->y = atof(av[3]) + (atof(av[6]) * get_t_cone(ac, av));
    w->z = atof(av[4]) + (atof(av[7]) * get_t_cone(ac, av));
    w->x1 = atof(av[2]) + (atof(av[5]) * get_t1_cone(ac, av));
    w->y1 = atof(av[3]) + (atof(av[6]) * get_t1_cone(ac, av));
    w->z1 = atof(av[4]) + (atof(av[7]) * get_t1_cone(ac, av));
    check_cone_number(ac, av);
    if (check_cone(ac, av) == 0) {
        extra_calculations(ac, av);
    } else if (check_cone(ac, av) > 0) {
        printf("%d intersection points:\n", 2);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
        printf("(%.3f, %.3f, %.3f)\n", w->x1, w->y1, w->z1);
    } else
        printf("No intersection point.\n");
}

float	get_t_cone(int ac, char **av)
{
    float	t;
    float	a = get_a2(ac, av);
    float	b = get_b2(ac, av);
    float	c = get_c2(ac, av);

    if (((pow(b, 2)) - (4 * a * c)) == 0) {
	t = -b / (2 * a);
    } else
        t = ((-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t);
}
