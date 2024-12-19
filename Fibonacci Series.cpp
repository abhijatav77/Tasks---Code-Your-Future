#include<iostream>
using namespace std;

//Check the Fibonacci series of N numbers

int fibOfN(int N){
    int a=0,b=1,c=0;
    cout<<"Fibonacci Series :";
    for(int i=1;i<=N;i++){
        cout<<a <<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}

int main(){
    
    fibOfN(6);

    return 0;
}

