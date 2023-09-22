/*Simple Calculator*/
#include<bits/stdc++.h>
using namespace std ;
void add(float a, float b){
    cout<<"Sum of the two numbers is "<<(a+b)<<endl;
}
void sub(float a, float b){
    cout<<"Difference of the two numbers is "<<(a-b)<<endl;
}
void mult(float a, float b){
    cout<<"Product of the two numbers is "<<(a*b)<<endl;
}
void div(float a , float b ){
    cout<<"Quotient of the two numbers is "<<(a/b)<<endl;
    
}
int main(){
    float a,b,ans;
    char ch;
    cout<<"Hello user\n";
    cout<<"Enter number 1\n";
    cin>>a;
    cout<<"Enter number 2\n";
    cin>>b;
    cout<<"Enter + to add the two numbers\n";
    cout<<"Enter - to subtract the two numbers\n";
    cout<<"Enter * to multiply the two numbers\n";
    cout<<"Enter / to divide the two numbers\n";
    cout<<"Enter your choice:\n";
    cin>>ch;
    if(ch=='+'){
        add(a,b);
    }
    else if(ch=='-'){
        sub(a,b);
    }
    else if(ch=='*'){
        mult(a,b);
    }
    else if(ch=='/'){
        div(a,b);
    }
    else{
        cout<<"Wrong choice\n";
    }



    return 0;
}