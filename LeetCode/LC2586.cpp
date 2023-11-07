//
// Created by Rain Night on 2021/10/27.
//

#include "LeetCode.h"

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int num = 0;
        for (int i = left; i <= right; ++i) {
            string word = words[i];
            if (word.find_first_of("aeiou") == 0 && word.find_last_of("aeiou") == word.length() - 1) num++;
        }
        return num;
    }
};

int main() {
    Solution s;
    vector<string> test1;
    test1.push_back("are");
    test1.push_back("amy");
    test1.push_back("u");
    int res=s.vowelStrings(test1, 0, 2);
    cout<< res <<endl;
    return 0;
}

