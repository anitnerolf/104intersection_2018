/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** calculations
*/

#include "my.h"

float	get_a(int ac, char **av)
{
    float	a;

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) + pow(atof(av[7]), 2);
    return (a);
}

float	get_b(int ac, char **av)
{
    float	b;

    b = 2 * ((atof(av[5]) * atof(av[2])) + (atof(av[6]) * atof(av[3])) + \
             (atof(av[7]) * atof(av[4])));
    return (b);
}

float	get_c(int ac, char **av)
{
    float	c;
    float	r = atof(av[8]);
    float	d = pow(r, 2);

    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) + \
	pow(atof(av[4]), 2) - d;
    return (c);
}

float	get_t(int ac, char **av)
{
    float	t;
    float	a = get_a(ac, av);
    float	b = get_b(ac, av);
    float	c = get_c(ac, av);

    t = ((-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t);
}

float	get_t1(int ac, char **av)
{
    float	t1;
    float	a = get_a(ac, av);
    float	b = get_b(ac, av);
    float	c = get_c(ac, av);

    t1 = ((-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t1);
}
