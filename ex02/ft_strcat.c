char	*ft_strcat(char *dest, char *src)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = dest;
	ptrsrc = src;
	while (*ptrdest)
		ptrdest++;
	while (*ptrsrc)
	{
		*ptrdest = *ptrsrc;
		ptrsrc++;
		ptrdest++;
	}
	*ptrdest = 0;
	return (dest);
}
