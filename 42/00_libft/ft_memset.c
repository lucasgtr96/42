#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*super;

	super = s;
	i = 0;
	while (i < n)
	{
		super[i] = c;
		i++;
	}
	return (super);
}
/*
int	main()
{
	char	test[10];
	
	printf("%s", ft_memset(test, 'a', sizeof(char) * 5));
	printf("%s", ft_memset(test, 'c', sizeof(char) * 5));
}*/
