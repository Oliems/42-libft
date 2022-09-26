#include "libft.h"

/*
** This function is based on Algorithm L by Donald Knuth. Given an
** array of characters already sorted in increasing order, modify the
** array in place to generate the next permutation in lexicographical
** order. The parameter n is the number of elements in the array. If a
** permutation exists the function returns 1, if not it returns 0.
*/

int	ft_permute_char(char *arr, int n)
{
	int	k;
	int	l;
	int	lo;
	int	hi;

	k = n - 2;
	while (k >= 0 && arr[k] > arr[k + 1])
		k--;
	if (k < 0)
		return (0);
	l = n - 1;
	while (arr[k] > arr[l])
		l--;
	ft_swap(&arr[k], &arr[l]);
	lo = k + 1;
	hi = n - 1;
	while (lo < hi)
	{
		ft_swap(&arr[lo], &arr[hi]);
		lo++;
		hi--;
	}
	return (1);
}
