// #include<iostream>
// using namespace std;
// int main(){
//     int day(1-7);
//     cout<<"enter day:";
//     cin>>day;
//     switch(day){
//         case 1: cout<<"Monday"<<endl;
//                 break;
//         case 2: cout<<"Tuesday"<<endl;
//                 break;
//         case 3: cout<<"Wednesday"<<endl;
//                 break;
//         case 4: cout<<"Thursday"<<endl;
//                 break;
//         case 5: cout<<"Friday"<<endl;
//                 break;
//         case 6: cout<<"Saturday"<<endl;
//                 break;
//         case 7: cout<<"Sunday"<<endl;
//                 break;
//         default: cout<<"Invalid"<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number 1:";
    cin>>x;
    int y;
    cout<<"Enter number 2:";
    cin>>y;
    int b;
    cout<<"Enter operation:";
    cin>>b;
    switch(b){
        case 1: cout<<"sum:"<< x+y <<endl;
                break;
        case 2: cout<<"Subtract:"<< x-y <<endl;
                break;
        case 3: cout<<"Multiplication:"<< x*y <<endl;
                break;
        case 4: cout<<"Division:"<< x/y <<endl;
                break;
        default:cout<<"Invalid"<<endl;        
    }
    return 0;
}
