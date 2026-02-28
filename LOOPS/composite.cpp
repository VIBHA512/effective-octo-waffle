#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0)
        cout<<"composite number";
        else
        cout<<"prime number";
        break;
    }
}
