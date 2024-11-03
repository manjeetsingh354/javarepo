#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n= 5;
    int arr[]={1,2,3,4,5};
    int maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        int currentsum = 0;
        for(int end =start;end<n;end++){
            currentsum= currentsum +arr[end];
            maxsum = max(currentsum,maxsum);
        }
    }
    cout<<maxsum;
    
}