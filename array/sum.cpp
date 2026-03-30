#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter number of elements ";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];}
        cout<<sum;

}

//output
//enter number of elements 4
//enter elements3 2 5 1
//11
