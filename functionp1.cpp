#include <iostream>
using namespace std;
void primeno(int n){
    for(int i =2;i<n;i++){
        if(n%i==0){
            cout<<"it not a prime no"<<endl;

        }else{
            cout<<"its a prime no"<<endl;
        }
    }
}
int main(){
    primeno(5);
    return 0;
}