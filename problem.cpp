// #include<iostream>
// using namespace std;
// int x=18;  // global variable
// int main(){
//     int x1; // local variable
//     cin>>x1;
//     cout<<x<<x1;
//     return 0;         // here local variable x1 is accesible in the function called block scope

// }
// int raman(){
//     cout<<x1;
//     int x2=19;
//     cout<<x2;
//     return 0;     // here x2 is accesible
// }
// // local variable and global variable defined with same name preference will be given to local variable inside the function and then to global varibale outside the function .


#include<iostream>
using namespace std;
int main(){
    int x;
    float y;
    char z='A';
    double x1;
    signed int  y2;
    unsigned int  z3;
    long long z4;

    cout<<sizeof(int)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(x1)<<endl;
    cout<<sizeof(y2)<<endl;
    cout<<sizeof(z3)<<endl;
    cout<<sizeof(z)<<endl;
    cout<<sizeof(z4)<<endl;
    cout<<unsigned(z3)<<endl;
    cout<<signed(y2)<<endl;

    int a=10;
    float b=a;
    cout<<a<<endl;

    cout<<(int)(z)<<endl;
return 0;
}

