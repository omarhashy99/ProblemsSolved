/*problem link
https://leetcode.com/problems/merge-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        copy(nums2.begin(), nums2.end(), nums1.begin() + (nums1.size() - nums2.size()));
        sort(nums1.begin(),nums1.end());
    }
};
