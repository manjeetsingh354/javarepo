#include <iostream>
#include <vector>
using namespace std;
vector<int> sumpairs(vector<int> nums,int target){
    vector<int> ans;
    int size = nums.size();
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums={3,4,5,6,7,8,9,3};
    int target = 9;
   vector<int> ans = sumpairs(nums, target);
    cout<<ans[0]<<ans[1];
}