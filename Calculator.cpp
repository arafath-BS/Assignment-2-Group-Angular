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

string Check(int val)
{
    if(val%2==0 && val>=0){
        return "(Even; Positive;)";
    }
    else if(val%2==0 && val<0){
        return "(Even; Negative;)";
    }
    else if(val%2 && val>=0){
        return "(Odd; Positive;)";
    }
    else if(val%2 && val<0){
        return "(Odd; Negative;)";
    }
}


int main(){


    int firstNumber,secondNumber;
    char operand;

    cout<<"Enter first number\n";
    cin>>firstNumber;

    cout<<"Enter Second number\n";
    cin>>secondNumber;

    cout<<"Enter Operand\n";
    cout<<"+ (for addition) - (for subtraction) * (for multiplication) / (for division) % (for finding reminder)"<<endl;
    cin>>operand;
    int result;
        switch (operand){

            case '+':
            result=addition(firstNumber,secondNumber);
            cout<<firstNumber<<" + "<<secondNumber<<" = "<<result<<endl;
            cout<<Check(firstNumber)<<" + "<<Check(secondNumber)<<" = "<<Check(result)<<endl;

            break;

            case '-':
            result=Subtraction(firstNumber,secondNumber);
            cout<<firstNumber<<" - "<<secondNumber<<" = "<<result<<endl;
            cout<<Check(firstNumber)<<" - "<<Check(secondNumber)<<" = "<<Check(result)<<endl;
            break;

            case '*':
            result=multiplication(firstNumber,secondNumber);
            cout<<firstNumber<<" * "<<secondNumber<<" = "<<result<<endl;
            cout<<Check(firstNumber)<<" * "<<Check(secondNumber)<<" = "<<Check(result)<<endl;
            break;

            case '/':
            result=division(firstNumber,secondNumber);
            cout<<firstNumber<<" / "<<secondNumber<<" = "<<result<<endl;
            cout<<Check(firstNumber)<<" / "<<Check(secondNumber)<<" = "<<Check(result)<<endl;
            break;
            case '%':
            result=findReminder(firstNumber, secondNumber);
            cout<<firstNumber<<" % "<<secondNumber<<" = "<<result<<endl;
            cout<<Check(firstNumber)<<" % "<<Check(secondNumber)<<" = "<<Check(result)<<endl;
            break;

    
    return 0;
}
