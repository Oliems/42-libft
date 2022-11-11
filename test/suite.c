#include "../libft.h"
#include "minunit.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/* CTYPE */
MU_TEST(test_isalpha)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_isalpha(i) == isalpha(i));
}
MU_TEST(test_isdigit)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_isdigit(i) == isdigit(i));
}
MU_TEST(test_isalnum)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_isalnum(i) == isalnum(i));
}
MU_TEST(test_isascii)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_isascii(i) == isascii(i));
}
MU_TEST(test_isprint)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_isprint(i) == isprint(i));
}
MU_TEST(test_toupper)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_toupper(i) == toupper(i));
}
MU_TEST(test_tolower)
{
	for (int i = 0; i <= 127; i++)
		mu_check(ft_tolower(i) == tolower(i));
}

MU_TEST_SUITE(test_ctype)
{
	MU_RUN_TEST(test_isalpha);
	MU_RUN_TEST(test_isdigit);
	MU_RUN_TEST(test_isalnum);
	MU_RUN_TEST(test_isascii);
	MU_RUN_TEST(test_isprint);
	MU_RUN_TEST(test_toupper);
	MU_RUN_TEST(test_tolower);
}

/* STRING */
MU_TEST(test_strnstr)
{
	char *ori;
	char *cpy;
	ori = strnstr("Hello World!", "llo", 4);
	cpy = ft_strnstr("Hello World!", "llo", 4);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello World!", "llo", 0);
	cpy = ft_strnstr("Hello World!", "llo", 0);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello World!", "", 4);
	cpy = ft_strnstr("Hello World!", "", 4);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("", "llo", 4);
	cpy = ft_strnstr("", "llo", 4);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("", "llo", 4);
	cpy = ft_strnstr("", "llo", 4);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello World!", "Hello World!", 12);
	cpy = ft_strnstr("Hello World!", "Hello World!", 12);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello World!", "Hello World!", 15);
	cpy = ft_strnstr("Hello World!", "Hello World!", 15);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello World!", "Hello World!", 5);
	cpy = ft_strnstr("Hello World!", "Hello World!", 5);
	mu_assert_string_eq(ori, cpy);
	ori = strnstr("Hello\nWorld!", "\n", 10);
	cpy = ft_strnstr("Hello\nWorld!", "\n", 10);
	mu_assert_string_eq(ori, cpy);
}

MU_TEST(test_strncmp)
{
	int ori;
	int cpy;
	char *err = NULL;

	ori = strncmp("Hello", "Hallo", 5);
	cpy = ft_strncmp("Hello", "Hallo", 5);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);

	ori = strncmp("Hallo", "Hello", 5);
	cpy = ft_strncmp("Hallo", "Hello", 5);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);

	ori = strncmp("Hello", "Hello", 10);
	cpy = ft_strncmp("Hello", "Hello", 10);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);

	ori = strncmp("a", "", 5);
	cpy = ft_strncmp("a", "", 5);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);

	ori = strncmp("", "a", 0);
	cpy = ft_strncmp("", "a", 0);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);

	ori = strncmp("", "", 0);
	cpy = ft_strncmp("", "", 0);
	asprintf(&err, "Expected %d got %d\n", ori, cpy);
	mu_assert(cpy == ori, err);
}

MU_TEST_SUITE(test_string)
{
	MU_RUN_TEST(test_strnstr);
	MU_RUN_TEST(test_strncmp);
}

int main(void)
{
	// MU_RUN_SUITE(test_ctype);
	MU_RUN_SUITE(test_string);
	MU_REPORT();
	return MU_EXIT_CODE;
}
