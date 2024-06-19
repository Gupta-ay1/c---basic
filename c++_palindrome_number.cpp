#include <iostream>
using  namespace std;
bool palindrome( int a){
int  b=a, reversednumber=0;
while(a!=0){
int digit = a % 10;          
        reversednumber = reversednumber * 10 + digit; 
        a = a / 10; 
}
return b==reversednumber;// is bool function ne check kiya ki ye condition true hai ke nahi 
}
int main(){
int number;
cout<<"enter the number to check for palindrome";
cin>>number;
if(palindrome(number))
{
        cout<<"the abouve number is a palindrome";
}
else{
        cout<<"it is not a palindrome";
}

return 0;
}