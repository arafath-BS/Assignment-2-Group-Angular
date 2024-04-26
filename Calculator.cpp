#include<bits/stdc++.h>
using namespace std;



int multiplication(int firstNumber, int secondNumber)
{
   return firstNumber*secondNumber;
}



int Subtraction(int firstNumber, int secondNumber){
    return firstNumber - secondNumber;
}


template<typename T>T addNumbers(T a, T b) {
    return a + b;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
        return 0; 
    }
    return num1 / num2;

}

int main(){

    int firstNumber,secondNumber;
    char operand;

   

    
    cout<<"Enter first number\n";
    cin>>firstNumber;

    cout<<"Enter Second number\n";
    cin>>secondNumber;


    cout<<"Enter Operand\n";
    cin>>operand;


 
        
        switch (operand){

            case '+':
            cout<<addNumbers(firstNumber,secondNumber)<<endl;
            break;

            case '-':
            cout<<Subtraction(firstNumber,secondNumber)<<endl;
            break;

            case '*':
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

            case '/':
            cout<<divide(firstNumber,secondNumber)<<endl;
            break;

        }

     
    
    return 0;
}
