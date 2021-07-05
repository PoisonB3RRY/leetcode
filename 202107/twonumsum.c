#include <stdio.h>
#include <stdlib.h>

int* twoSum(int*, int, int, int*);

int main(int argc, char const *argv[])
{
    int nums[] = {2, 7, 10, 15};
    int numsSize = 4;
    int target = 9;
    int *returnSize;

    int *ret = twoSum(nums, numsSize, target, returnSize);
    for (int i = 0; i < numsSize; ++i)
    {
        printf("%d\n", ret[i]);
    }
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int index1, index2;

    int *ret = malloc(sizeof(int) * 2);

    for (index1 = 0; index1 < numsSize; ++index1) {
        for (index2 = 0; index2 < numsSize; ++index2) {
            if ((nums[index1] + nums[index2]) == target) {
                ret[0] = index1;
                ret[1] = index2;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}