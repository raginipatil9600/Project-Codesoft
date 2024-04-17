#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Calculator

//Addition function
int addition(int &a, int &b){
    return (a+b);
}

//subtraction function
int subtraction(int &a, int &b){
   return (a-b);
}

//multiplication function
int multiplication(int &a, int &b){
    return a*b;
}

//division function
double division(int &a, int &b){
    double a1 = a * 1.0;
    double b1 = b * 1.0;
    cout  << a1 << b1<<endl;
    double ans = a1/b1;
    if(b == 0){
        cout << "The second number cannot be zero for division"<< endl;
        return 0;
    }
   
    else return ans;
}
int main() {
    int number1 = 0;
    int number2 = 0;
    string sign ;
    cout << "Please enter the first number: " << endl;
    cin >> number1;
    cout << "Please enter the second number:" << endl;
    cin >> number2;
    cout << "Enter the operation you want to perform : (Ex: '+', '-', '*','/'):" << endl;
    cin >> sign;
    int ans = 0;
    if (sign == "+"){
         ans = addition (number1, number2);
         cout << ans << endl;
    }
    else if( sign == "-"){
        ans = subtraction(number1, number2);
        cout << ans << endl;
    }
    else if(sign == "*"){
        ans = multiplication(number1, number2);
        cout << ans << endl;
    }
    else if(sign == "/"){
        ans = division(number1, number2);
        cout << ans << endl;
    }
    else{
        cout << "Please enter a valid operation"<<endl;
    }
    return 0;
}