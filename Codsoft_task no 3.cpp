/*TIC-TAC-TOE-GAME*/
#include<bits/stdc++.h>
using namespace std ;
int chk=0,a=1;
void matrix(char arr[3][3] , string nm1 ,string nm2){
    cout<<"Current status \n";
    for(int k=0 ; k<3 ; k++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[k][j]<<" ";
        }
        cout<<endl;
    }
    if(arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2] && arr[0][1]!='_'){
        chk=1;
        if(arr[0][0]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2] && arr[1][1]!='_'){
        chk=1;
        if(arr[1][0]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2] && arr[2][0]!='_'){
        chk=1;
        if(arr[2][0]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0] && arr[0][0]!='_'){
        chk=1;
        if(arr[0][0]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1] && arr[0][1]!='_'){
        chk=1;
        if(arr[0][1]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2] && arr[0][2]!='_'){
        chk=1;
        if(arr[0][2]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]!='_'){
        chk=1;
        if(arr[0][0]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
    else if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0] && arr[0][2]!='_'){
        chk=1;
        if(arr[0][2]=='X'){
            cout<<nm1<<" wins\n";
        }
        else{
            cout<<nm2<<" wins\n";
        }
    }
}
void game(char arr[3][3] , string nm1 ,string nm2){

    int i=0;
    while(i<9){
        // if(chk==1){
        //     break;
        // }
        cout<<nm1<<" enter your move\n";
        int x,y;
        cin>>x >>y;
        x--;
        y--;
        arr[x][y]='X';
        i++;
        matrix(arr,nm1,nm2);
        if(chk==1){
            break;
        }
        if(i>=9){
            break;
        }
        cout<<nm2<<" enter your move\n";
        int x2,y2;
        cin>>x2 >>y2;
        x2--;
        y2--;
        
        arr[x2][y2]='O';
        i++;
        matrix(arr,nm1,nm2);
        // i++;
        if(chk==1){
            break;
        }
    }
    if(chk==0){
        cout<<"Match draw\n";
    }
}
int main(){
    string nm1,nm2;
        cout<<"Hello players welcome to TIC-TAC-TOE GAME !\n";
        cout<<"Player 1 enter your name\n";
        cin>>nm1;
        cout<<"Player 2 enter your name\n ";
        cin>>nm2;
        cout<<nm1<<" is assigned X\n";
        cout<<nm2<<" is assigned O\n";
        char arr[3][3]={ '_' , '_' , '_' , '_' , '_' , '_' , '_' , '_' , '_' };
    while(a==1){
        
        matrix(arr,nm1,nm2);
        game(arr,nm1,nm2);
        cout<<"Enter 1 to play again or 0 to exit\n";
        cin>>a;
        if(a==1){
            chk=0;
            for(int i=0 ; i<3 ; i++){
                for(int j=0 ; j<3 ; j++){
                    arr[i][j]='_';
                }
            }
        }

    }
    return 0;
}