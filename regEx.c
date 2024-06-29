#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool	isMatch(char *s, char *p)
{
	int	rows;
	int	columns;
	bool	**dp;
	int	i;
	int	j;

	rows = strlen(s);
	columns = strlen(p);
	dp = (bool**)malloc(sizeof(bool *) * (rows + 1));
	i = 0;
	j = 0;

	while (i < rows + 1)
	{
		dp[i] = (bool *)malloc(sizeof(bool) * (columns + 1));
		i++;
	}
	i = 0;
	while (i <= rows)
	{
		j = 0;
		while (j <= columns)
		{
			dp[i][j] = false;
			j++;
		}
		i++;
	}
	
	dp[0][0] = true;
	
	j = 2;
	while (j <= columns)
	{
		if (p[j - 1] == '*')
			dp[0][j] = dp[0][j - 2];
		j++;
	}
	
	i = 1;
	while (i <= rows)
	{
		j = 1;
		while (j <= columns)
		{
			if (s[i - 1] == p[j - 1] || p[j - 1] == '.')
				dp[i][j] = dp[i - 1][j - 1];
			else if (p[j - 1] == '*')
			{
				dp[i][j] = dp[i][j - 2];
				if (p[j - 2] == '.' || p[j - 2] == s[i - 1])
					dp[i][j] = dp[i][j] || dp[i - 1][j];
			}
			j++;
		}
		i++;
	}
	return (dp[rows][columns]);
}
/*
int main (void)
{
	printf("return ---> %s\n", isMatch("ab", ".*") ? "true" : "false");
	return (0);
}*/
