#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int>& nums,int target){
    for(int i:nums){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){
    int target =7;
    vector<int>nums={6,7,9,10};
   cout<<linearsearch(nums,target);
    return 0;
}