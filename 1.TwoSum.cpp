//problem link!
//https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> vec;
        for(int i =0;i<n;i++){
            for(int u =0;u<n;u++){
                if(nums[u]+nums[i]==target&&i!=u){
                    vec = {i,u};
                }
            }
        }
        return vec;
    }
};
