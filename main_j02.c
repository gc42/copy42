/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_travail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:49:28 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/07 12:50:10 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "./ex00/ft_print_alphabet.c"
#include "./ex01/ft_print_reverse_alphabet.c"
#include "./ex02/ft_print_numbers.c"
#include "./ex03/ft_is_negative.c"
#include "./ex04/ft_print_comb.c"
#include "./ex05/ft_print_comb2.c"
#include "./ex06/ft_putnbr.c"


//int		ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);

void	ft_entete_exo(int nbr)
{
	printf("------\n-------------------------\n");
	printf("\tex%d\n\n", nbr);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{

// #######################################
// ex00 ft_print_alphabet.c
	ft_entete_exo(0);
// #######################################
	ft_print_alphabet();
/*
// #######################################
// ex01 ft_print_reverse_alphabetpc
	ft_entete_exo(1);
// #######################################
	ft_print_reverse_alphabet();

// #######################################
// ex02	ft_print_numbers.c
	ft_entete_exo(2);
// #######################################
	ft_print_numbers();

// #######################################
// ex04	ft_print_comb.c
	ft_putchar('\n');
	ft_entete_exo(3);
// #######################################
	int		positif;
	int		negatif;
	int		positif;
	int		negatif;
	negatif = -10;
	positif = 20;
	ft_is_negative(positif);
	ft_is_negative(negatif);
	ft_is_negative(2147483647);
	ft_is_negative(-214783648);
	printf("---(test sur 10, -10, intMax, intMin. Attendu PNPN)---");

// #######################################
// ex04	ft_print_comb.c
	ft_entete_exo(4);
// #######################################
	ft_print_comb();

// #######################################
// ex05	ft_print_comb2.c
	ft_entete_exo(5);
// #######################################
	ft_print_comb2();

// #######################################
// ex06	ft_putnbr.c
	ft_entete_exo(6);
// #######################################
	printf("\n1 <nb\n");
	ft_putnbr(1);
	printf("\n-1 <nb\n");
	ft_putnbr(-1);
	printf("\n0 <nb\n");
	ft_putnbr(0);
	printf("\n1234567 <nb\n");
	ft_putnbr(1234567);
	printf("\n2147483647 <nb\n");
	ft_putnbr(2147483647);
	printf("\n-2147483648 <nb\n");
	ft_putnbr(-2147483648);
	printf("\n11234460 <nb\n");
	ft_putnbr(12305670);
	printf("\n11030460 <nb\n");
	ft_putnbr(11030460);


// #######################################
// ex07	ft_print_combn.c
// #######################################

	return (0);

*/
	}
