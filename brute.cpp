#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsumm(vector<int> nums,int target){
    vector<int> ans;
    
    int n= nums.size();
    int i=0,j=n-1;
    while(j>i){
        int ps = nums[i]+nums[j];
        if(ps<target){
            i++;
        }
        else if(ps>target){
            j++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main(){
    int target = 9;
    vector<int> nums= {3,4,5,6,7,8};
    int ans = pairsumm(nums,target);
    cout<<ans;
    return 0;
}