
void	ft_bzero(void *str, size_t a)
{
	int i;

	i = 0;

	char *newStr = (char *) str;
	
	while (i < a)
	{
		if (newStr[i] != 0)
		{
		newStr[i] = 0;
		}
		i++;
	}
