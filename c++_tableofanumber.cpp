#include <iostream>
using namespace std;
int main(){
int a,i=1,b;
cout<<"enter the number whose table you want "<<endl;
cin>>a;
cout<<"table of "<< a <<" is as follows:"<<endl;
do{
    b=a*i;
    cout<<b<<endl;
    i++;

  }while(i<=10);
return 0;
}










