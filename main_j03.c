/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_travail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:49:28 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/12 19:49:14 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// LIENS VERS LES EXERCICES
#include "../j02/ex06/ft_putnbr.c"
#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"
#include "./ex07/ft_strrev.c"
#include "./ex08/ft_atoi.c"
#include "./ex09/ft_sort_integer_table.c"

// PROTOTYPES DES FONCTIONS
void	ft_ft(int *nbr);
void	ft_ultimate_ft(int	*********nbr);
void	ft_putnbr(int nb);
int		ft_putnbr_filter(int nb);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
int		what_type(int sp);
void	ft_sort_integer_table(int *tab, int size);

// SEPARATEUR
void	ft_entete_exo(int numexo)
{

	printf("-------------------------------\n");
	printf("\tex0%d ", numexo);
}

// DEFINITION FONCTIONS RECURENTES
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

// VARIABLES

// MAIN MAIN MAIN MAIN MAIN ##############################
int		main(void)
{



	// ############################
	printf("-------------------------------\n");
	ft_entete_exo(0); printf("ft_ft, donne 42\n");
	// ex 00 ft_ft.c
	// ############################
	int		a;

	a = 0;

	printf("avant modif = 0\n");
	ft_putnbr(a);			// avant modif = 0
	ft_putchar('\n');

	ft_ft(&a);// changement en 42

	printf("apres modif = 42\n");
	ft_putnbr(a);			// apres modif = 42



	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(1); printf("ft_ultimate, **********p\n");
	// ex01 ft_ultimate.c
	// ############################
	int		*nbr1;
	int		**nbr2;
	int		***nbr3;
	int		****nbr4;
	int		*****nbr5;
	int		******nbr6;
	int		*******nbr7;
	int		********nbr8;
	int		*********nbr9;
	a = 0;
	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	printf("var a: avant modif = 0 \n");
	ft_putnbr(a);
	ft_putchar('\n');

	ft_ultimate_ft(nbr9);

	printf("var a: apres modif *********nbr9\n");
	ft_putnbr(a);




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(2); printf("ft_swap\n");
	// ex02 ft_swap
	// ############################
	int		a2;
	int		b2;

	a2 = 1;
	b2 = 5;
	printf("format: |a|b|-|a|b| (avant-apres swap)\n");
	printf("|1|5|-|5|1| (attendu)\n");
	printf("|%d|%d|-", a2, b2);

	ft_swap(&a2, &b2);

	printf("|%d|%d|\n", a2, b2);




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(3); printf("ft_div_mod\n");
	// ex03 ft_div_mod.c
	// ############################
	int		a3;
	int		b3;
	int		div;
	int		mod;
//	int		*pdiv;
//	int		*pmod;

	div = 0;
	mod = 0;
//	pdiv = &div;
//	pmod = &mod;
	a3 = 20;
	b3 = 10;
	printf("format: |a|b|div|mod|\n");
	printf("|%d|%d|%d|%d| (avant)\n", a3, b3, div, mod);
	printf("|20|10|2|0| (attendu)\n");

//	ft_div_mod(a3, b3, pdiv, pmod);
	ft_div_mod(a3, b3, &div, &mod);

	printf("|%d|%d|%d|%d| (result)\n", a3, b3, div, mod);

	div = 0;
	mod = 0;
	a3 = 53;
	b3 = 5;
	printf("\n");
	printf("|%d|%d|%d|%d| (avant)\n", a3, b3, div, mod);
	printf("|53|5|10|3| (attendu)\n");
	ft_div_mod(a3, b3, &div, &mod);
	printf("|%d|%d|%d|%d| (result)\n", a3, b3, div, mod);

	div = 0;
	mod = 0;
	a3 = 12;
	b3 = 0;
	printf("\n");
	printf("|%d|%d|%d|%d| (avant)\n", a3, b3, div, mod);
	printf("|12|0|0|0| (attendu, pas div par '0')\n");
	ft_div_mod(a3, b3, &div, &mod);
	printf("|%d|%d|%d|%d| (result)\n", a3, b3, div, mod);




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(4); printf("ft_ultimate_div\n");
	// ex04 ft_ultimate_div_mod.c
	// ############################
	int		a4;
	int		b4;

	printf("format: |a|b|()\n");

	a4 = 12345678;
	b4 = 100;
	printf("\n");
	printf("|%d|%d|(avant)\n", a4, b4);
	printf("|123456|78|(attendu)\n");
	ft_ultimate_div_mod(&a4, &b4);
	printf("|%d|%d|(result)\n", a4, b4);

	a4 = 248;
	b4 = 0;
	printf("\n");
	printf("|%d|%d|(avant)\n", a4, b4);
	printf("|248|0|(attendu, pas div par '0')\n");
	ft_ultimate_div_mod(&a4, &b4);
	printf("|%d|%d|(result)\n", a4, b4);


	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(5); printf("ft_putstr\n");
	// ex05 ft_putstr.c
	// ############################
	char	str1[] = "Je veux que ca marche";
	char	str2[] = "C'est la rentree";
	char	str3[] = "mail@!#$^&*()_+[]\\;<>";
	printf("Je veux que ca marche (attendu)\n");
	ft_putchar('\n');
	ft_putstr(str1);
	ft_putchar('\n');
	printf("C'est la rentree (attendu)\n");
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	printf("mail@!#$^&*()_+[]\\;<> (attendu)\n");
	ft_putchar('\n');
	ft_putstr(str3);
	//ft_putchar('\n');




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(6); printf("ft_strlen, longueur string\n");
	// ex06 ft_strlen.c
	// ############################
	char	str61[] = "123456789.12345678 9";
	int		var;
	var = 0;		// valeur de depart
	var = ft_strlen(str61);		// Affectation a variable

	printf("'123456789.12345678 9' (20 caracteres):\n");
	ft_putnbr(ft_strlen(str61));
	printf("\n");

	char	str62[] = "Le vieil homme et la mer";
	printf("'Le vieil homme et la mer' (24 caracteres):\n");
	ft_putnbr(ft_strlen(str62));
	printf("\n");

	char	str63[] = "1";
	printf("'1' (1 caractere):\n");
	ft_putnbr(ft_strlen(str63));
	printf("\n");

	char	str64[] = "";
	printf("'' (0 caractere):\n");
	ft_putnbr(ft_strlen(str64));
	printf("\n");




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(7); printf("ft_strrev, inverser chaine\n");
	// ex07 ft_strrev.c
	// ############################
	char	str71[] = "123456789A";
	char	str72[] = "A-A--A---A----A-----A------A";
	char	str73[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";

	ft_putstr(str71);
	ft_putchar('\n');
	printf("A987654321 (attendu)\n");
	ft_putstr(ft_strrev(str71));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr(str72);
	ft_putchar('\n');
	printf("A------A-----A----A---A--A-A (attendu)\n");
	ft_putstr(ft_strrev(str72));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putstr(str73);
	ft_putchar('\n');
	printf("zYxWvUtSrQpOnMlKjIhGfEdCbA (attendu)\n");
	ft_putstr(ft_strrev(str73));




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(8); printf("ft_atoi, chaine en int\n");
	// ex08 ft_atoi
	// ############################
	char	str81[] = "  123";
	char	str82[] = "123456";
	char	str83[] = "+ 654321";
	char	str84[] = "- 654321";
	char	str85[] = "+654321";
	char	str86[] = "-654321";
	char	str87[] = "6 54321";
	char	str88[] = "AAAA654321";
	char	str89[] = "+0654321";
	char	str810[] = "-0654321";
	char	str811[] = "++654321";
	char	str812[] = "+-654321";
	char	str813[] = "--654321";
	char	str814[] = "-+654321";
	char	str815[] = "?654321";

	printf("123 (attendu,test81 '123')\n");
	printf("%d UnixAtoi\n", atoi(str81));
	ft_putnbr(ft_atoi(str81));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("123456 (attendu,test82 '123456')\n");
	printf("%d UnixAtoi\n", atoi(str82));
	ft_putnbr(ft_atoi(str82));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test83 '+ 654321')\n");
	printf("%d UnixAtoi\n", atoi(str83));
	ft_putnbr(ft_atoi(str83));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test84 '- 654321')\n");
	printf("%d UnixAtoi\n", atoi(str84));
	ft_putnbr(ft_atoi(str84));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("654321 (attendu,test85 '+654321')\n");
	printf("%d UnixAtoi\n", atoi(str85));
	ft_putnbr(ft_atoi(str85));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("-654321 (attendu,test86 '-654321')\n");
	printf("%d UnixAtoi\n", atoi(str86));
	ft_putnbr(ft_atoi(str86));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("6 (attendu,test87 '6 54321')\n");
	printf("%d UnixAtoi\n", atoi(str87));
	ft_putnbr(ft_atoi(str87));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test88 'AAAA654321')\n");
	printf("%d UnixAtoi\n", atoi(str88));
	ft_putnbr(ft_atoi(str88));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("654321 (attendu,test89 '+0654321')\n");
	printf("%d UnixAtoi\n", atoi(str89));
	ft_putnbr(ft_atoi(str89));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("-654321 (attendu, test810 '-0654321')\n");
	printf("%d UnixAtoi\n", atoi(str810));
	ft_putnbr(ft_atoi(str810));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test811 '++654321')\n");
	printf("%d UnixAtoi\n", atoi(str811));
	ft_putnbr(ft_atoi(str811));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test812 '+-654321')\n");
	printf("%d UnixAtoi\n", atoi(str812));
	ft_putnbr(ft_atoi(str812));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu,test813 '--654321')\n");
	printf("%d UnixAtoi\n", atoi(str813));
	ft_putnbr(ft_atoi(str813));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu, test814 '-+654321')\n");
	printf("%d UnixAtoi\n", atoi(str814));
	ft_putnbr(ft_atoi(str814));
	ft_putchar('\n');
	ft_putchar('\n');

	printf("0 (attendu, test815 '?654321')\n");
	printf("%d UnixAtoi\n", atoi(str815));
	ft_putnbr(ft_atoi(str815));
	ft_putchar('\n');
	ft_putchar('\n');

	char	str816[] = "2147483647";
	printf("2147483647 (attendu, test816 '2147483647')\n");
	printf("%d UnixAtoi\n", atoi(str816));
	ft_putnbr(ft_atoi(str816));
	ft_putchar('\n');
	ft_putchar('\n');

	char	str817[] = "2147483648";
	printf("2147483648 (attendu, test817 '2147483648')\n");
	printf("%d UnixAtoi\n", atoi(str817));
	ft_putnbr(ft_atoi(str817));
	ft_putchar('\n');
	ft_putchar('\n');

	char	str818[] = "-2147483648";
	printf("-2147483648 (attendu, test818 '-2147483648')\n");
	printf("%d UnixAtoi\n", atoi(str818));
	ft_putnbr(ft_atoi(str818));
	ft_putchar('\n');
	ft_putchar('\n');

	char	str819[] = "-2147483649";
	printf("2147483647 (attendu, test819 '-2147483649')\n");
	printf("%d UnixAtoi\n", atoi(str819));
	ft_putnbr(ft_atoi(str819));




	// #############################
	printf("-------------------------------\n");
	ft_entete_exo(9); printf("ft_sort_integer_table\n");
	// ex09 ft_sort_integer_table
	// ############################
//	int		tab[10] = {19, 28, 37, 46, 55, 64, 73, 82, 91, 40};
	int		tab1[10] = {40, 46, 91, 28, 73, 82, 19, 64, 37, 55};
	int		tab2[10] = {40, 46, 1134567800, 0, 73, -82, 15419, 64, 37, 55};

	ft_sort_integer_table(tab1, 10);
	ft_sort_integer_table(tab2, 10);

	// afficher les valeurs triees
	int		i;
	i = 0;
	while (i < 10)
	{
		printf("%d", tab1[i]);
		if (i != 9)
			printf(",");
		i++;
	}

	ft_putchar('\n');

	i = 0;
	while (i < 10)
	{
		printf("%d", tab2[i]);
		if (i != 9)
			printf(",");
		i++;
	}


	return (0);
}
