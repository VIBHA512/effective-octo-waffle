#include <iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    void getDetails(){
        cout<<"enter name ";
        cin>>name;
        cout<<"enter age ";
        cin>>age;
    }
    void showDetails(){
        cout<<"name "<<name<<endl<<"age "<<age<<endl;
    }
    
};
class student :public person{
    protected:
    int rollNo;
    float marks;
    public:
    void getStudentData(){
        cout<<"enter roll no ";
        cin>>rollNo;
        cout<<"enter marks ";
        cin>>marks;
    }
    void showStudentData(){
        showDetails();
        cout<<"roll No "<<rollNo<<endl<<"marks"<<marks<<endl;
    }
};
int main(){
student s;
s.getDetails();
s.showDetails();
s.getStudentData();
s.showStudentData();

}
