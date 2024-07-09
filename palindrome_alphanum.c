#include <stdio.h>
#include <string.h>

int is_alphanum(char c)
{
  if (c >= 'a' && c <='z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
    return (1);
 return(0);
}

void is_palindrome(char *str)
{
  int i;
  int j;

  i = 0;
  j = strlen(str) - 1; 
  while(i < j)
  {
    while(i < j && !is_alphanum(str[i]))
      i++;
    while(i < j && !is_alphanum(str[j])) 
      j--;
    if (str[i] != str[j])
    {
       printf("Não é palindromo!\n");
       return ;
    }
    j--;
    i++;
  }
  printf("É palindromo!\n");
}

int main(int count, char **value)
{
  if(count > 1)
  {
    int i = 1;
    while(i < count)
    {
      printf("%s: ", value[i]);
      is_palindrome(value[i]);
      i++;
    }
  }
  else 
      printf("Informe pelo menos uma palavra, por favor.\n");  
  return (0);
}
