#include<bits/stdc++.h>
using namespace std;


int addition(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int Subtraction(int firstNumber, int secondNumber){
    return firstNumber - secondNumber;
}


int multiplication(int firstNumber, int secondNumber)
{
   return firstNumber*secondNumber;

}

double division(double firstNumber, double secondNumber) {
    if (secondNumber == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0; 
    }
    return firstNumber / secondNumber;

}

int findReminder(int firstNumber, int secondNumber){
    if(secondNumber==0){
        cout << "No number can be divide by zero. Enter a valid number\n";
    }else
        return firstNumber % secondNumber;
}

int main(){


    int firstNumber,secondNumber;
    char operand;

    cout<<"Enter first number\n";
    cin>>firstNumber;

    cout<<"Enter Second number\n";
    cin>>secondNumber;

    cout<<"Enter Operand\n";
    cout<<"+ (for addition) - (for subtraction) * (for multiplication) / (for division) % (for finding reminder)"
    cin>>operand;

        switch (operand){

            case '+':
            cout<<addition(firstNumber,secondNumber)<<endl;
            break;

            case '-':
            cout<<Subtraction(firstNumber,secondNumber)<<endl;
            break;

            case '*':
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

            case '/':
            cout<<division(firstNumber,secondNumber)<<endl;
            break;
            case '%':
                cout << findReminder(firstNumber, secondNumber) << endl;
        }   
    
    return 0;
}
