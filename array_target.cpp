#include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,8,9,0,4}; 
    int size = 5;
    int target = 10;
    cout<<linearsearch(arr,size,target);
return 0;
}









































































