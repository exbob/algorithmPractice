#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            int k = nums[i];
            int h = nums[j];
            int m = k + h;
            if (m == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    printf("Two Sum\n");

    int nums[] = {2, 8, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twoSum(nums, sizeof(nums)/sizeof(int), target, &returnSize);
    if (result == NULL) {
        printf("No solution found.\n");
        free(result);
        return 1;
    }
    
    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("nums[%d]:%d ", result[i], nums[result[i]]);
    }
    printf("\n");

    free(result);
    return 0;
}