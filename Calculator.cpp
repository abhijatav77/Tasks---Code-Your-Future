
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    char operation;
    double num1,result =0;

    cout<<"*****************************"<<endl;
    cout<<"Welcome to the Our Calculator"<<endl;
    cout<<"*****************************"<<endl;
    cout<<":: You can perform on the ::"<<endl<<"   +, -, *, /, %, q(exit)"<<endl<<endl;
    cin>>result;
    while(true){
        cin>>operation;
        if(operation == 'q' || operation == 'Q'){
            exit(0);
        }
        cin>>num1;
        switch(operation){
            case '+':
                result += num1;
                cout<<" = "<<result<<endl;
                break;
            case '-':
                result -= num1;
                cout<<" = "<<result<<endl;
                break;
            case '*':
                result *= num1;
                cout<<" = "<<result<<endl;
                break;
            case '/':
                if(num1 != 0){
                    result /= num1;
                    cout<<" = "<<result<<endl;
                }
                else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case '%':
                if(num1 != 0){
                    result = (int)result % (int)num1;
                    cout<<"= "<<result<<endl;
                }
                else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Not a recognized operation!" << endl;
        }
    }
    return 0;
}
