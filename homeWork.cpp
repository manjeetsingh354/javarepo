#include <iostream>
using namespace std;
void sumNproduct(int arr[],int size){
    int sum =0;
    int product = 1;
    for(int i=0;i<size;i++){
        sum = sum + i;
        product = product *i;
    }
   
}
int main(){
    int arr[]={8,3};
    int size = 2;
    int sum ;
    int product;
sumNproduct(arr,size);
cout<<sum;
    return 0;
    
}