#include<iostream>
using namespace std;

class Matrix {
    int a[5][5];
    int rows, cols;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
    }

    void input() {
        for (int i = 0; i < rows; i++) {
            cout << "Enter elements for row " << i + 1 << ": ";
            for (int j = 0; j < cols; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    Matrix sum(Matrix m) {
        Matrix temp(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }

    Matrix product(Matrix m) {
        Matrix temp(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                temp.a[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return temp;
    }

    Matrix transpose() {
        Matrix temp(cols, rows);
        for (int i = 0; i < cols; i++)
            for (int j = 0; j < rows; j++)
                temp.a[i][j] = a[j][i];
        return temp;
    }
};

int main() {
    int choice;
    char ch;

    Matrix m1(2,3), m2(2,3), m3(2,3);
    Matrix m4(2,3), m5(3,2), m6(2,2);

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Input\n2. Sum\n3. Display\n4. Product\n5. Transpose\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Matrix 1 (2x3):\n";
                m1.input();
                cout << "Enter Matrix 2 (2x3):\n";
                m2.input();
                break;

            case 2:
                m3 = m1.sum(m2);
                cout << "Sum calculated.\n";
                break;

            case 3:
                cout << "Matrix 1:\n"; m1.display();
                cout << "Matrix 2:\n"; m2.display();
                cout << "Sum Matrix:\n"; m3.display();
                break;

            case 4:
                cout << "Enter Matrix 1 (2x3):\n";
                m4.input();
                cout << "Enter Matrix 2 (3x2):\n";
                m5.input();

                m6 = m4.product(m5);
                cout << "Product Matrix:\n";
                m6.display();
                break;

            case 5:
                cout << "Original Matrix:\n";
                m1.display();

                m3 = m1.transpose();
                cout << "Transpose Matrix:\n";
                m3.display();
                break;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "Continue? (y/n): ";
        cin >> ch;

    } while(ch == 'y');

    return 0;
}
