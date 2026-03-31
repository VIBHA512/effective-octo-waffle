/*Create a class Time with three data members : hours, minutes and seconds. Write member
functions to overload unary increment (++) operator that increments the corresponding
hours, minutes and seconds of the class time. Write code for both prefix and postfix
versions of the same.*/

#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    // Constructor
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Display function
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Prefix ++
    void operator++() {
        seconds++;

        if (seconds >= 60) {
            seconds = 0;
            minutes++;
        }
        if (minutes >= 60) {
            minutes = 0;
            hours++;
        }
    }

    // Postfix ++
    void operator++(int) {
        seconds++;

        if (seconds >= 60) {
            seconds = 0;
            minutes++;
        }
        if (minutes >= 60) {
            minutes = 0;
            hours++;
        }
    }
};

int main() {
    Time t(1, 59, 59);

    cout << "Original Time: ";
    t.display();

    ++t;   // Prefix
    cout << "After Prefix ++: ";
    t.display();

    t++;   // Postfix
    cout << "After Postfix ++: ";
    t.display();

    return 0;
}

/*
output-
Original Time: 1:59:59
After Prefix ++: 2:0:0
After Postfix ++: 2:0:1
*/

