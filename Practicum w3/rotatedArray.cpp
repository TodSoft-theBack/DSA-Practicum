#include "rotatedArray.h"


int FindPivot(const std::vector<int>& nums)
{
    auto left = 0;
    auto right = nums.size() - 1;

    while (left < right) 
    {
        auto mid = left + (right - left) / 2;
    
        if (nums[mid] > nums[right]) 
            left = mid + 1;
        else 
            right = mid;
    }
    
    return left;  
}

int BinarySearch(const std::vector<int>& nums, int offset, int target)
{
    int indexFound = -1;

    int n = nums.size();
    int left = 0, right = n - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        int realMid = (mid + offset) % n;

        if (nums[realMid] == target) 
            return realMid;
        else if (nums[realMid] < target) 
            left = mid + 1;
        else 
            right = mid - 1;
    }

    return -1;
}

int Search(std::vector<int>& nums, int target) 
{
    int pivot = FindPivot(nums);
    int offset = pivot == -1 ? 0 : pivot;

    return BinarySearch(nums, offset, target);
}