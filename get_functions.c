/*
** EPITECH PROJECT, 2019
** 104_intersection
** File description:
** get_functions
*/

#include "my.h"

float	check_for_b(int ac, char **av)
{
    float	b = get_b1(ac, av);

    if (b = 0);
    return (0);
}

float	check_for_b2(int ac, char **av)
{
    float	b = get_b2(ac, av);

    if (b = 0);
    return (0);
}

void	some_calculations(int ac, char **av)
{
    calculate_t	*w = malloc(sizeof(calculate_t));

    if (check_for_b(ac, av) == 0)
        printf("There is an infinite number of intersection points.\n");
    else {
        printf("%d intersection point:\n", 1);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
    }
}

void	extra_calculations(int ac, char **av)
{
    calculate_t	*w = malloc(sizeof(calculate_t));

    if (check_for_b2(ac, av) == 0)
        printf("There is an infinite number of intersection points.\n");
    else {
        printf("%d intersection point:\n", 1);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
    }
}
