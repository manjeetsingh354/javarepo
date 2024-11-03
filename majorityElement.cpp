#include <iostream>
#include <vector>
using namespace std;
vector<int> mj(vector<int>nums){
    
    int n = nums.size();
    int freq = 1; 
    int ans = nums[0];
    for(int i =0;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq>=n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    return 0;
}