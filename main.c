/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** main
*/

#include "my.h"

void	the_sphere(int ac, char **av)
{
    calculate_t	*w = malloc(sizeof(calculate_t));

    w->x = atof(av[2]) + (atof(av[5]) * get_t(ac, av));
    w->y = atof(av[3]) + (atof(av[6]) * get_t(ac, av));
    w->z = atof(av[4]) + (atof(av[7]) * get_t(ac, av));
    w->x1 = atof(av[2]) + (atof(av[5]) * get_t1(ac, av));
    w->y1 = atof(av[3]) + (atof(av[6]) * get_t1(ac, av));
    w->z1 = atof(av[4]) + (atof(av[7]) * get_t1(ac, av));
    if (check(ac, av) == 0) {
        printf("%d intersection point:\n", 1);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
    } else if (check(ac, av) > 0) {
        printf("%d intersection points:\n", 2);
        printf("(%.3f, %.3f, %.3f)\n", w->x, w->y, w->z);
        printf("(%.3f, %.3f, %.3f)\n", w->x1, w->y1, w->z1);
    } else
        printf("No intersection point.\n");
}

void	radius(int ac, char **av)
{
    if (atoi(av[8]) < 0) {
        exit (84);
    } else {
        if (atoi(av[1]) == 1 || atoi(av[1]) == 2 || atoi(av[1]) == 3) {
            switch (atoi(av[1])) {
            case (1):
                printf("Sphere of radius %d\n", atoi(av[8]));
                break;
            case (2):
                printf("Cylinder of radius %d\n", atoi(av[8]));
                break;
            case (3):
                if (atoi(av[8]) > 90)
                    exit (84);
                printf("Cone with a %d degree angle\n", atoi(av[8]));
                break;
            }
        } else
            exit (84);
    }
}

void	line_passing(int ac, char **av)
{
    radius(ac, av);
    printf("Line passing through the point ");
    printf("(%d, %d, %d) ", atoi(av[2]), atoi(av[3]), atoi(av[4]));
    printf("and parallel to the vector ");
    printf("(%d, %d, %d)\n", atoi(av[5]), atoi(av[6]), atoi(av[7]));
    options(ac, av);
}

void	description(void)
{
    printf("USAGE\n");
    printf("\t./104intersection opt xp yp zp xv yv zv p\n");
    printf("\nDESCRIPTION\n");
    printf("\topt\t\tsurface option: 1 for a sphere, 2 for a");
    printf(" cylinder, 3 for a cone\n");
    printf("\t(xp, yp, zp)\tcoordinates of a point by which");
    printf(" the light ray passes through\n");
    printf("\t(xv, yv, zv)\tcoordinates of a vector parallel");
    printf(" to the light ray\n");
    printf("\tp\t\tparameter: radius of a sphere, radius of the");
    printf("cylinder, or\n\t\t\tangle formed by the cone and the Z-axis\n");
}

int	main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            description();
        } else
            write(2, "Bad usage, try '-h' option!\n", 28);
        exit (84);
    } else if (ac == 9) {
        line_passing(ac, av);
    } else {
        write(2, "Error! Check number of arguments!\n", 34); 
        exit (84);
    }
}
