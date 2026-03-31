#include <iostream>
using namespace std;
class student{
    string name;
    int rollNo;
    public: 
    void getStudentInfo(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter roll no";
        cin>>rollNo;
    }
};
class Student_Marks:public student{
        int a[5];
        int i;
        int sum=0;
        float percent;
public:
    void getMarksInfo(){
        cout<<"enter marks";
        for (int i=0;i<5;i++){
            cin>>a[i];
        }
        for(i=0;i<5;i++){
            sum+=a[i];
        }
        percent=(sum/5.0);
    }
    void displayInfo(){
cout<<"marks ";
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl<<"sum";
        cout<<sum<<endl;
        cout<<"percentage "<<percent;
    }

};
int main(){
    Student_Marks s;
    s.getStudentInfo();
    s.getMarksInfo();
    s.displayInfo();
}
