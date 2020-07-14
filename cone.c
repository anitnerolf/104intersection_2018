/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** cone
*/

#include "my.h"

const	float	PI =  3.14159265358979323846;

float	get_a2(int ac, char **av)
{
    float	a;
    float	r = atof(av[8]);
    float	angle;

    angle = r * PI / 180;
    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) - \
        pow((atof(av[7]) * tan(angle)), 2);
    return (a);
}

void	check_cone_number(int ac, char **av)
{
    float	r = atof(av[8]);
    float	angle;

    angle = r * PI / 180;
    if (atof(av[5]) == 0 && atof(av[6]) == 0 \
        && atof(av[7]) == 0) {
        if ((pow(atof(av[2]), 2) + pow(atof(av[3]), 2)) == \
            (pow(atof(av[4]), 2) * pow(tan(angle), 2))) {
            printf("%d intersection point:\n", 1);
            printf("(%.3f, %.3f, %.3f)\n", atof(av[2]), \
                   atof(av[3]), atof(av[4]));
        } else
            printf("No intersection point.\n");
    }
}

float	get_b2(int ac, char **av)
{
    float	b;
    float	r = atof(av[8]);
    float	angle;

    angle = r * PI / 180;
    b = 2 * ((atof(av[5]) * atof(av[2])) + (atof(av[6]) * atof(av[3])) \
             - ((atof(av[7]) * atof(av[4])) * pow(tan(angle), 2)));
    return (b);
}

float	get_c2(int ac, char **av)
{
    float	c;
    float	r = atof(av[8]);
    float	angle;

    angle = r * PI / 180;
    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - \
        pow(atof(av[4]), 2) * pow(tan(angle), 2);
    return (c);
}

float	get_t1_cone(int ac, char **av)
{
    float	t1;
    float	a = get_a2(ac, av);
    float	b = get_b2(ac, av);
    float	c = get_c2(ac, av);

    t1 = ((-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    return (t1);
}

