#include <iostream>
#include <string>
using  namespace std;
int main(){
int a,i;
string g;
cout<<"enter the symbol you want"<<endl;
cin>>g;
cout<<"enter the number of rows"<<endl;
cin>>a;
for(int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
cout<<g;

}
cout<<"\n";
}
cout<<"Reverse pattern"<<endl;
for(int i=1;i<+a;++i){
   for(int j=1;j<=a+1-i;++j){
  cout<<g;
   }
cout<<"\n";

}

cout<<g;

return 0;
}
