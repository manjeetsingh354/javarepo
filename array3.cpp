#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size = 6;
    int number[size] = {12,23,34,-12,44,1};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(number[i] > largest){
            largest = number[i];
        }
    }
    cout<<<<endl;
}