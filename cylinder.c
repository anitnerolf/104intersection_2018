/*
** EPITECH PROJECT, 2018
** 104_intersection
** File description:
** cylinder
*/

#include "my.h"

float	get_a1(int ac, char **av)
{
    float	a;

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2);
    return (a);
}

float	get_b1(int ac, char **av)
{
    float	b;

    b = 2 * ((atof(av[5]) * atof(av[2])) + (atof(av[6]) * atof(av[3])));
    return (b);
}

float	get_c1(int ac, char **av)
{
    float	c;
    float	r = atof(av[8]);
    float	d = pow(r, 2);

    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - d;
    return (c);
}

float	get_t_c(int ac, char **av)
{
    float	t;
    float	a = get_a1(ac, av);
    float	b = get_b1(ac, av);
    float	c = get_c1(ac, av);

    if (((pow(b, 2)) - (4 * a * c)) == 0) {
        t = -b / (2 * a);
    } else
        t = ((-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t);
}

float	get_t1_c(int ac, char **av)
{
    float	t1;
    float	a = get_a1(ac, av);
    float	b = get_b1(ac, av);
    float	c = get_c1(ac, av);

    t1 = ((-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t1);
}
