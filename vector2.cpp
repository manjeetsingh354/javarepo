#include <iostream>
#include <vector>
using namespace std;
int uniqueno(vector<int>& nums){
    int ans = 0;
    for(int val:nums){
        ans = ans^val;
    }
    return ans;
}
int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<uniqueno(nums);
    return 0;
}