#include <iostream>
using  namespace std;

class Employee// cannot be created in the main function and it is a datatype
{
private://these are only accessible by the fuctions inside the class
int a, b, c;
public:
int d,e;
void setdata(int a1,int b1,int c1);//declaration
void getdata(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
}
    
    
};
void Employee :: setdata(int a1,int b1, int c1){
 a=a1;
 b=b1;
 c=c1;
}

int main()
{
Employee ayush;
ayush.d=23;
ayush.e=2;
ayush.setdata(34,4,56);
ayush.getdata();
//ayush.d or ayush.e cannot be defined in the main function as is is a private variable inside a class and can be used by a function defined inside the class 
















return 0;
}