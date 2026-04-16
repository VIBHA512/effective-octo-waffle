#include<iostream> 
using namespace std; 

class Rational { 
    float num, denom; 
public: 
    Rational(int n=0, int d=1) { 
        num = n; 
        denom = d; 
    } 
    void display() { 
        cout << num << "/" << denom << endl; 
    } 
    
    // Corrected method: Removed semicolon after method signature, 
    // corrected case-sensitivity for 'O1', and updated denominator formula.
    Rational add(Rational O1) { 
        Rational temp; 
        temp.num = num * O1.denom + O1.num * denom; 
        temp.denom = denom * O1.denom; 
        return temp; 
    } 
}; 

int main() { 
    Rational a1(2,3), a2(3,4), a3; 
    a3 = a1.add(a2); 
    cout << "result: "; 
    a3.display(); 
    return 0; 
}
