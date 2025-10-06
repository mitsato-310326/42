/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:57:46 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 12:25:37 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>

int ft_atoi(const char *str);
int	ft_isalpha(char look);
int ft_strlen(char* str);
char *ft_strdup(char* str);
char **ft_split(char *str, char split);
void ft_bzero(char *s, int n);
char *ft_strjoin(char* left, char* right);
int	ft_isalnum(char look);
int	ft_isdigit(char look);
int	ft_isascii(int look);
void *ft_calloc(size_t nmemb, size_t size);
int	ft_isprint(char look);
char *ft_itoa(int nbr);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(char *dest, const char *src, int c, size_t n);
void *ft_memset(char *s, int c, size_t n);
void *ft_memmove(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlcat(char *dst, const char *src, size_t dsize);
char ft_toupper(char look);
char ft_tolower(char look);
char *ft_strchr(char *s, char c);
char *ft_strrchr(char *s, char c);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_memchr(char *s, char c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(char *s, char *c, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(const char *s1, const char *set);

#endif
