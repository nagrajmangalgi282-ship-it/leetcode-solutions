#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int index = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    while (index < nums.size())
    {
        nums[index] = 0;
        index++;
    }
}

void printArray(vector<int>& nums)
{
    for (int num : nums)
        cout << num << " ";
    cout << endl;
}

int main()
{
    // Test Case 1: Typical case
    vector<int> nums1 = {0, 1, 0, 3, 12};

    moveZeroes(nums1);

    cout << "Test Case 1: ";
    printArray(nums1);

    // Test Case 2: All zeros
    vector<int> nums2 = {0, 0, 0};

    moveZeroes(nums2);

    cout << "Test Case 2: ";
    printArray(nums2);

    return 0;
}
