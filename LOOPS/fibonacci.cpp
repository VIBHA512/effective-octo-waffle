#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms ";
    cin>>n;
    int a,c,b;
    a=0;b=1;
    cout<<"fibonacci series"<<endl;
    for (int i=1;i<n;i++){
        cout<<a<<"\n";
        c=a+b;
        a=b;
        b=c;
    }
}
