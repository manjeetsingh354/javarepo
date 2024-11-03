#include <iostream>
using namespace std;
int main(){
    int n = 9;
    bool b = true;
    for(int i=2;i<=(n-1);i++){
        if(n%i!=0){
            b= true;
            break;
            
        }
    }
    if(b==true){
        cout<<"is a prime no"<<endl;
    }else{
        cout<<"its a non prime no";
    }
    return 0;
}