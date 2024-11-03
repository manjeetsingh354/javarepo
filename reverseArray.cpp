#include <iostream>
using namespace std;
void reversearray(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[]={10,11,12,14,12,9};
    int size = 6;
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}