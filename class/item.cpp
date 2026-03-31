#include<iostream>
using namespace std;

class item{
    int number;
    float cost;

public:
    item(int a, float b){
        number = a;
        cost = b;
    }

    void getData(){
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main(){
    item t(2, 3.0);
    t.getData();
}
