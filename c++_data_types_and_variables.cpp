#include <iostream>
using namespace std;
int g=23;//global variable
void sum(){
    cout<<g;
    }
//void function does not return anything rathar is used after
// local variable is given prescedence inside the main function 

int main(){
    // here we are assigning a variable a in which we are storing 22 as a value 
    int a=22;
    int g=45;//local variable
    // in c++ we do not use prin("string",variable)instead we use the following format
    cout<<g<<"\n";
    sum();// here you are calling the function created above
    cout<<"\nthis is an integer "<<a<<".\n";
    // int c=4; /* this syntax and syntax below do the same work*/
    // int b=45;
    int c=4, b= 5;
    cout<<"here the value of c is "<<c<<" \nand the value of b is "<<b;
    // \n is used at the end of the line not in the starting
    float d=3.14;
    cout<<"\nthe value of pi is "<<d;
    cout<<"\nthe required sum is "<< a+b;
    char f='p';
    cout<<"\nthe value of "<<f<<"i is "<<d<<"\n";
    bool h=false;
    cout<<h;//returns 1 if bool variable is true otherwise 0 if false
    //char is a single character variable can not store more than one character
    return 0;















}



