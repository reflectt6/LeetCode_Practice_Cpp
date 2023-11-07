//
// Created by Rain Night on 2021/10/27.
//

#include "LeetCode.h"

class Solution {
public:
    int countGoodSubstrings(string s) {
        int res = 0;
        int n = s.size();
        for (int i = 0; i < n - 2; ++i){
            if (s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]){
                ++res;
            }
        }
        return res;
    }

};

int main() {
    Solution s;
    int res=s.countGoodSubstrings("asdsad");
    cout<< res <<endl;
    return 0;
}

