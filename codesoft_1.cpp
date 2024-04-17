#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//genearte random number and ask user to guess it
//give hints
int main(){
    int number = rand()%1000;
   
    cout << "Guess the number: " << endl;
    int guess = 0;
    while(true){
        cin >> guess;
       
        if(guess == number){
            cout << "Wohooo you guessed the number correctly!!!" << endl;
            return 0;
        }
       
        else if(guess < number){
            cout << "Ohh ohh try again!! The number you guessed is too low" << endl;
        }
        else{
            cout << "Ohh ohh try again!! The number you guessed is too high"<< endl;
        }
    }
   
    return 0;
}