#include <stddef.h>
#include <stdio.h>

void	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}
/*
int	main ()
{
	char	dest[5];
	char	*src = "ok mec sinon ca va ?";
	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	
}*/
