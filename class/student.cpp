#include<iostream>
using namespace std;
class Student {
    string name;
    int roll;
    float marks;
    public:
    Student (string n, int r, float m){      //constructor
        name=n;
        roll=r;
        marks=m;
    }
    void display(){
        cout<<"name "<<name<<endl;
        cout<<"roll "<<roll<<endl;
        cout<<"marks "<<marks<<endl;

    }
};
int main(){
    Student s("VIBHA",55, 100.0);
    s.display();

}
