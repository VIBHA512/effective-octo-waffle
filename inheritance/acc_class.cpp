#include <iostream>
using namespace std;
class Account{
protected:
    string name;
    int acc_no;
    float balance;
public:
    void input(){
        cout<<"enter name, account number and balance "<<endl;
        cin>>name>>acc_no>>balance;
    }
    void deposit(){
        float amt;
        cout<<"enter deposited amount";
        cin>>amt;
        balance+=amt;
    }
    void display(){
        cout<<"name"<<name<<endl<<"balnce"<<balance<<endl;
    }

};
class sav_acct:public Account{
    public:
    void interest(){
        float rate=5;
        balance=balance*rate/100;
        cout<<"interest added";
    }
    void withdraw(){
        float amt;
        cout<<"enter withdrawn amount";
        cin>>amt;
        if(amt<=balance)
        balance-=amt;
        else
        cout<<"insufficient balance";
    }
};
class cur_acct:public Account{
    public:
    void withdraw(){
        float amt;
        cout<<"enter withdrawn amount";
        cin>>amt;
        if(amt<=balance)
        balance-=amt;
        else
        cout<<"insufficient balance";
    }
    void checkbalance(){
        if (balance<500)
        cout<<"minimun balance no maintained /n penalty applied";
        balance-=50;
    }
};
int main(){
    sav_acct s;
    cur_acct c;
    cout<<"saving account/n";
    s.input();
    s.deposit();
    s.interest();
    s.withdraw();
    s.display();

    cout<<"current account/n";
    c.input();
    c.deposit();
    c.withdraw();
    c.checkbalance();
    c.display();


}

/* output
saving accountenter name, account number and balance 
vubha 45 4000
enter deposited amount50
interest addedenter withdrawn amount4000
insufficient balancenamevubha
balnce202.5
current accountenter name, account number and balance 
noddy
56 4500
enter deposited amount500
enter withdrawn amount50
namenoddy
balnce4900 */
