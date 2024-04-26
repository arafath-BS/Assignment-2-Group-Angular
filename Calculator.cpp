#include <bits/stdc++.h>
using namespace std;


int multiplication(int firstNumber, int secondNumber)
{
   return firstNumber*secondNumber;
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
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

            case '-':
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

            case '*':
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

            case '/':
            cout<<multiplication(firstNumber,secondNumber)<<endl;
            break;

        }

     
    
    return 0;
}
