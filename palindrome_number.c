#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Verificar a quantidade de dígitos de um número para poder mallocar:
int ft_numlen(int num)
{
	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

//Retornar int como char*: 
char	*ft_itoa(int num)
{
	int	len = ft_numlen(num);	
	char	*ret = (char *)malloc(sizeof(char) * (len + 1));
	ret[len] = '\0';

	if (num < 0)
	{
		ret[0] = '-';
		num *=-1;
	}	
	while(num != 0)
	{
		ret[--len] = num % 10 + 48;
		num /= 10;
	}
	return (ret);
}

bool	isPalindrome(int x)
{
	if (x >= 0 && x <= 9)
		return (1);
	if (x < 0)
		return (0);

	char *digit = ft_itoa(x);
	int i = 0;
	int max = strlen(digit) - 1;
	if (max == 1)
	{
		if(digit[i] != digit[max]) 
			return (0);
		return (1);
	}
	while (digit[i] && i <= max)
	{
		if (digit[i] != digit[max])
			return (0);
		
		i++;
		max--;
	}
	return(1);
}

int main (void)
{
	printf("%i\n",isPalindrome(10022201));
}
