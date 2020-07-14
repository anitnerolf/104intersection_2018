/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** checking
*/

#include "my.h"

float	check(int ac, char **av)
{
    float	f;
    float	a = get_a(ac, av);
    float	b = get_b(ac, av);
    float	c = get_c(ac, av);

    f = ((pow(b, 2)) - (4 * a * c));
    return (f);
}

float	check_c(int ac, char **av)
{
    float	f;
    float	a = get_a1(ac, av);
    float	b = get_b1(ac, av);
    float	c = get_c1(ac, av);

    f = ((pow(b, 2)) - (4 * a * c));
    return (f);
}

float	check_cone(int ac, char **av)
{
    float	f;
    float	a = get_a1(ac, av);
    float	b = get_b1(ac, av);
    float	c = get_c1(ac, av);

    f = ((pow(b, 2)) - (4 * a * c));
    return (f);
}

void	the_cylinder(int ac, char **av)
{
    calculate_t	*w = malloc(sizeof(calculate_t));

    w->x = atof(av[2]) + (atof(av[5]) * get_t_c(ac, av));
    w->y = atof(av[3]) + (atof(av[6]) * get_t_c(ac, av));
    w->z = atof(av[4]) + (atof(av[7]) * get_t_c(ac, av));
    w->x1 = atof(av[2]) + (atof(av[5]) * get_t1_c(ac, av));
    w->y1 = atof(av[3]) + (atof(av[6]) * get_t1_c(ac, av));
    w->z1 = atof(av[4]) + (atof(av[7]) * get_t1_c(ac, av));
    if (check_c(ac, av) == 0) {
        some_calculations(ac, av);
    } else if (check_c(ac, av) < 0) {
        printf("No intersection point.\n");
    } else {
        printf("%d intersection points:\n", 2);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
        printf("(%.3f, %.3f, %.3f)\n", w->x1, w->y1, w->z1);
    }
}

void	options(int ac, char **av)
{
    if (atoi(av[1]) == 1 || atoi(av[1]) == 2 || atoi(av[1]) == 3) {
        switch (atoi(av[1])) {
        case (1):
            the_sphere(ac, av);
            break;
        case (2):
            the_cylinder(ac, av);
            break;
        case (3):
            the_cone(ac, av);
            break;
        }
    } else
        exit (84);
}
