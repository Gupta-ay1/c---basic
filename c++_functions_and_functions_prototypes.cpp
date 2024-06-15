#include <iostream>
using  namespace std;
// int sum(int a,int b){// thiws is a function doing sum and returning value c
// int c=a+b;
// return c;
// }
int sum(int a, int b);//fuction prototyping matlab function aage define kar diya hai
void g(void);//fiunction not always returns a  value 
int main(){
    g();
    int num1,num2;
    cout<<"\nenter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"the required sum is "<<sum(num1,num2);
return 0;
}
int sum(int a,int b){// thiws is a function doing sum and returning value c
int c=a+b;
return c;
}
//num1 and num2 are actual parameters and a and b are formal parameters defined in a function
void g(){
    cout<<"good morning";
}