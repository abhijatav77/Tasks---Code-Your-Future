#include<iostream>
using namespace std;
bool palindromeN(int number){
    int originalN = number;
    int reverse = 0;

    while( number!=0 ){
        int lastD = number%10;
        reverse = reverse * 10 + lastD;
        number = number/10;
    }
    return originalN == reverse;
}

int main(){
    int number;
    cout<<"Enter the value :";
    cin>>number;
    if(palindromeN(number)){

        cout<<"Palindrome Number";
    } else{
        cout<<"Not Palindrome Number";
    }
    return 0;
}
