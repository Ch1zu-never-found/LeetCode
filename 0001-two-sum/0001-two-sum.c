#include <stdlib.h>

int* twoSum(int* num, int n, int target, int* returnSize)
{
    int *ans = (int *)malloc(2 * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(num[i] + num[j] == target)
            {
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}