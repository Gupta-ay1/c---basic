#include <iostream>
using  namespace std;
int factorial(int n){
if(n<=1){
    return 1;
}
return n*factorial(n-1);//recurssion
}//calling function inside other function until  base condition is met is called recurssions

int main(){
    int a;
    cout<<"enter the number whole factorial you want"<<endl;
    cin>>a;
    cout<<"the required factorial you want "<<factorial(a);
return 0;
}
