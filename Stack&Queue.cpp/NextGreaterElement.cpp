#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> nextGreaterElement(vector<int>& nums, int n) {
         stack<int> s;
         vector<int> NG(n);
         for(int i = n-1; i >= 0; i--) {
            while(s.size() >  0 && s.top() <= nums[i]) {
                s.pop();
            }
            if(s.empty()) {
                NG[i] = -1;
            } else {
                NG[i] = s.top();
            }
            s.push(nums[i]);
         }
         return NG;
     }
};
int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    int n = arr.size();

    Solution sol;
    vector<int> result = sol.nextGreaterElement(arr,n);
    for(int x: result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}