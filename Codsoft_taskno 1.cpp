/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/
#include<bits/stdc++.h>
using namespace std ;
int rand_num(int ub , int lb){
    srand(time(0));
    return rand() %(ub -lb +1) +1;
}
int main(){
    int ub=10 , lb=1 , num;
    int a=rand_num(ub , lb);
    int cnt=1;
    string name;
    cout<<"Hello User Welcome to the game\n";
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"The aim of the game is to guess the number\n";
    cout<<"So enter any number between 1 to 10\n";
    cin>>num;
    if(num==a){
        cout<<"Hurrah "<<name<<" wins !\n";
        cout<<"You guessed the correct answer in "<<cnt<<" attempts\n";
    }
    else{
        while(num!=a){
            cnt++;
            int diff=num-a;
            if(diff>=3){
                cout<<"Guess is too high\n";
            }
            else if(diff<=-3){
                cout<<"Guess is too low\n";
            }
            else{
                cout<<"Close guess\n";
            }
            cout<<"Input another number\n";
            int num2;
            cin>>num2;
            num=num2;
        }
        if(num==a){
            cout<<"Hurrah "<<name<<" wins !\n";
            cout<<"You guessed the correct answer in "<<cnt<<" attempts\n";
        }
    }
    return 0; 


}