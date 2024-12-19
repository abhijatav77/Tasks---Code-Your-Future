#include<iostream>
using namespace std;
void swap(int *x,int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a=10,b=20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(&a,&b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}




// #include <iostream>

// using namespace std;

// void swap(int &x, int &y);
// int main() {
//   int a = 5;
//   int b = 10;

//   cout << "Before swapping: a = " << a << ", b = " << b << endl;

//   swap(a, b);

//   cout << "After swapping: a = " << a << ", b = " << b << endl;

//   return 0;
// }
// void swap(int &x,int &y)
// {
//   int temp = x;
//   x = y;
//   y = temp;
// }
