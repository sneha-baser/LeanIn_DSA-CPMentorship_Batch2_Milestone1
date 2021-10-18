#include <stdio.h>
// Function to find the floor of `x` in a sorted array nums[0…n-1],
// i.e., the largest integer less than or equal to `x`
int getFloor(int nums[], int n, int x)
{
    int low = 0, high = n - 1, mid;
 
    int floor = -1;
 
    while (low <= high)
    {
        mid = (low + high) / 2;
 
        if (nums[mid] == x) {
            return nums[mid];
        }
 
        else if (x < nums[mid]) {
            high = mid - 1;
        }
 
    
        else {
            floor = nums[mid];
            low = mid + 1;
        }
    }
 
    return floor;
}
 int main(void)
{
    int nums[] = { 1, 4, 6, 8, 9 };
    int n = sizeof(nums) / sizeof(nums[0]);
 
    for (int i = 0; i <= 10; i++)
    {
        printf("Number %d ", i);
        printf("floor is %d\n", getFloor(nums, n, i));
    }
 
    return 0;
}
