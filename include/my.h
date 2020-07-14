/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** my.h
*/

#ifndef	MY_H_
#define	MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>

typedef	struct	calculate
{
    float	x;
    float	y;
    float	z;
    float	x1;
    float	y1;
    float	z1;
}	calculate_t;

float	get_a(int ac, char **av);
float	get_b(int ac, char **av);
float	get_c(int ac, char **av);
float	get_t(int ac, char **av);
float	get_t1(int ac, char **av);
float	get_a1(int ac, char **av);
float	get_b1(int ac, char **av);
float	get_c1(int ac, char **av);
float	get_t_c(int ac, char **av);
float	get_t1_c(int ac, char **av);
float	get_a2(int ac, char **av);
float	get_b2(int ac, char **av);
float	get_c2(int ac, char **av);
float	get_t_cone(int ac, char **av);
float	get_t1_cone(int ac, char **av);
float	check(int ac, char **av);
float	check_c(int ac, char **av);
float	check_cone(int ac, char **av);
void	the_sphere(int ac, char **av);
void	the_cylinder(int ac, char **av);
void	the_cone(int ac, char **av);
void	radius(int ac, char **av);
void	line_passing(int ac, char **av);
int	main(int ac, char **av);
void	description(void);
void	options(int ac, char **av);
float	check_for_b(int ac, char **av);
float	check_for_b2(int ac, char **av);
void	some_calculations(int ac, char **av);
void	extra_calculations(int ac, char **av);
void	check_cone_number(int ac, char **av);

#endif	/* MY_H_ */
