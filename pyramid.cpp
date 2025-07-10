// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i<=n;i++){
        for(int j=n-1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}