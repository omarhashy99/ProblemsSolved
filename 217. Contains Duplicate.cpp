/*
problem link:
https://leetcode.com/problems/contains-duplicate/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto i:freq){
            if(i.second>1){
                return 1;
            }
        }
        return 0;
    }
};
