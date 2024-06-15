//this is a system defined header file 
#include <iostream>
//u can create a user defined header file in which you have written a code already and is stored in your computer and want to use in the program you are creating 
//#include"file name"-this file should contain a code which is not returning you anything just like a void function 
using namespace std;
int main(){
int a=4,b=5;
//cout<<a+b,a-b,a*b,a/b; this is a wrong format and will only give you first operation
cout<<a+b<<endl;
cout<<b-a<<endl;
cout<<a*b<<endl;
cout<<b/a<<endl;//"/"operator does not give the decimal values 
//end l is used for changing the line instead of \n
cout<<a++<<endl;
cout<<a--<<endl;
cout<<--a<<endl;
cout<<++a<<endl;
cout<<(a==b)<<endl;
cout<<(a!=b)<<endl;
cout<<(a>=b)<<endl;
cout<<(a<=b)<<endl;
//many other comparison operators are there
cout<<((a==b) && (a>=b))<<endl;
cout<<(!(a==b));
return 0;









}
