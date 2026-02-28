#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int ld;
    while(n>0){
        ld=n%10;
        sum+=ld;
        n=n/10;
    }
    cout<<sum;

}
