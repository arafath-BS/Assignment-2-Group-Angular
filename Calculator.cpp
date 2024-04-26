#include <bits/stdc++.h>
using namespace std;

template<typename T>
T addNumbers(T a, T b) {
    return a + b;
}

int main(){
    char choice;

    while (true) {

        cout << "Menu:" << endl;
        cout << "1. Add two number" << endl;
        cout << "2. Substract two number" << endl;
        cout << "3. Multifly two number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        double firstNumber,secondNumber;
        switch (choice) {
            case '1':
                cout<< "Enter two number for adding : "<<endl;
                cin>>firstNumber>>secondNumber;
                cout << addNumbers(firstNumber,secondNumber) << endl;
                break;
            // case '2':
            //     cout<< "Enter two number for substraction : "<<endl;
            //     cin>>firstNumber>>secondNumber;
            //     cout << addNumbers(firstNumber,secondNumber) << endl;
            //     break;
            // case '3':
            //     cout<< "Enter two number for multiplication : "<<endl;
            //     cin>>firstNumber>>secondNumber;
            //     cout << addNumbers(firstNumber,secondNumber) << endl;
            //     break;
            // case '4':
            //     cout<< "Enter two number for division : "<<endl;
            //     cin>>firstNumber>>secondNumber;
            //     cout << addNumbers(firstNumber,secondNumber) << endl;
            //     break; 
            case '5':
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}
