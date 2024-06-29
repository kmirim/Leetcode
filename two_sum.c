#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int check_sum(int num1, int num2)
{
    int ret = num1 + num2;
    return(ret);
}

int	*twoSum(int *arr, int numsSize, int target, int *returnSize)
{
	int i = 0;
	int j = i + 1;
	*returnSize = 2;
	
	int *ret = (int *)malloc(sizeof(int) * (*returnSize));

	if (!ret)
		return (0);
	while (i < numsSize - 1)
	{
		while (j < numsSize)
		{
        		if (check_sum(arr[i], arr[j]) == target)
			{
				ret[0] = i;
				ret[1] = j;
				return (ret);
			}
                        j++;
                }
                i++;
        }
	return (0);
}
/*
int main ()
{
	int arr[] = {2,7,11,15};
	//Tamanho do arr
	int s_arr = sizeof(arr)/sizeof(arr[0]);
	
	printf("%ls", two_sum(arr, 9, 4));

}*/
