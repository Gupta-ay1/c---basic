#include <iostream>
using  namespace std;
int row;
int column;
char token='x';
int digit;
bool tie=false;
char game[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string p1,p2;

void functionone(){
cout<<"   |   |   "<<endl;
cout<<" "<<game[0][0]<<" | "<<game[0][1]<<" | "<<game[0][2]<<endl;
cout<<"___|___|___"<<endl;
cout<<" "<<game[1][0]<<" | "<<game[1][1]<<" | "<<game[1][2]<<endl;
cout<<"___|___|___"<<endl; 
cout<<" "<<game[2][0]<<" | "<<game[2][1]<<" | "<<game[2][2]<<endl;
cout<<"   |   |   "<<endl;
}
void functiontwo(){
if(token=='x'){
cout<<p1<<" please enter the number of the box where you want to place the token ";
cin>>digit;
}
if(token=='0'){
cout<<p2<<" please enterb the number of the box where you want to enter the token ";
cin>>digit;
}
if(digit==1){
row=0;
column=0;
}if(digit==2){
row=0;
column=1;
}if(digit==3){
row=0;
column=2;
}if(digit==4){
row=1;
column=0;
}if(digit==5){
row=1;
column=1;
}if(digit==6){
row=1;
column=2;
}if(digit==7){
row=2;
column=0;
}if(digit==8){
row=2;
column=1;
}if(digit==9){
row=2;
column=2;
}
else if(digit<1 && digit>9){

cout<<"invalid!!!"<<endl;

}
if(token=='x' && game[row][column] !='x' && game[row][column]!='0'){
    game[row][column]='x';
    token='0';
}

else if(token=='0' && game[row][column] !='x' && game[row][column]!='0'){
    game[row][column]='0';
    token='x';
}
else{
   cout<<"there is no empty space"<<endl;
   functiontwo();
}
}
bool functionthree(){
for( int i=0;i<3;i++){
    if(game[i][0]== game[i][1] && game[i][0]==game[i][2] || game[0][i]==game[1][i] && game[0][i]==game[2][i]){
    return true;
}
}
if(game[0][0]==game[1][1]&& game[0][0]==game[2][2] || game[0][2]==game[1][1] && game[0][2]==game[2][1]){
return true;
}
for( int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   if(game[i][j]!= 'x' && game[i][j]!='0'){
    return false;
   }
  }
}

tie=true;
return false;
}


int main(){
    cout<<"enter the name of player 1"<<endl;
 cin>>p1;
 cout<<"enter the name of player 2"<<endl;
 cin>>p2;
 cout<<p1<<" will play first and "<<p2<<" will play second"<<endl;
    
    
    
    while(!functionthree()){
     functionone();
     functiontwo();
     functionthree();

    }
    functionone();
if(token=='x' && tie==false){
    cout<<p1<<" wins the game"<<endl;
}
else if(token=='0'&& tie==false){

    cout<<p2<<" wins the game"<<endl;

}
else{
  cout<<"its a draw"<<endl;
}





























return 0;
}