#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (dest1 < src1)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
	}
	return (dest1);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	super[] = "helloWorld";

		ft_memmove(super + 2, super, 5);
		printf("Mine : %s\n", super);
	return (0);
}*/
