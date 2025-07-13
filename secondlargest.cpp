#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"NO OF ELEMENTS :";
    cin>>n;
    int temp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }}
        
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"2nd largest is :";
    cout<<arr[n-2];
return 0;
}
