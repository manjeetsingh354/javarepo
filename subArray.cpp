#include <iostream>
using namespace std;
int main(){
    int n= 5;
    int arr[]={2,3,4,5,6};
    for(int start = 0;start<n;start++){
        for(int end = start;end<n;end++){
            for(int i=0;i<n;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
      cout<<endl;
    }
}