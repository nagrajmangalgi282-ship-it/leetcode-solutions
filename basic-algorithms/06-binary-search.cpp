#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    // Test Case 1: Target exists
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    cout << "Test Case 1: "
         << binarySearch(nums1, target1) << endl;

    // Test Case 2: Target does not exist
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    cout << "Test Case 2: "
         << binarySearch(nums2, target2) << endl;

    return 0;
}