char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptrdest;
	char			*ptrsrc;
	unsigned int	i;

	i = 0;
	ptrdest = dest;
	ptrsrc = src;
	while (*ptrdest != '\0')
		ptrdest++;
	while (i < nb && *ptrsrc != '\0')
	{
		*ptrdest = *ptrsrc;
		ptrsrc++;
		ptrdest++;
		i++;
	}
	*ptrdest = 0;
	return (dest);
}
