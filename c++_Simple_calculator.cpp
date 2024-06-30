#include <iostream>
#include <cmath>
using  namespace std;
int a,b;
float c;

int main(){
string s1,s2;
cout<<"this calculator only perform 10 operations at a time and minimum of 2 operations "<<endl;
cout<<"enter first number "<<endl;
cin>>a;
cout<<"enter the operator to perform the operation : "<<endl;
cin>>s1;
cout<<"enter another number ";
cin>>b;
if(s1=="+"){
    c=a+b;
}
else if(s1=="-"){
    c=abs(a-b);
}
else if(s1=="*"){
    c=a*b;

}
else if(s1=="/"){
    c=a/b;
}
else if(s1=="**"){
    c=pow(a,b);
}
else if(s1=="%"){
    c=a%b;
}
else{
cout<<"The operator entered is invalid"<<endl;
c=a;
} 
for(int i=0;i<10;i++){
cout<<"enter the operator to perform the operation : "<<endl;
cin>>s1;
cout<<"enter another number ";
cin>>b;
if(s1=="+"){
    c=c+b;
}
else if(s1=="-"){
    c=abs(c-b);
}
else if(s1=="*"){
    c=c*b;

}
else if(s1=="/"){
    c=c/b;
}
else if(s1=="**"){
    c=pow(c,b);
}

else{
cout<<"The operator entered is invalid"<<endl;
}
cout<<"want to perform more operation?? ";
cin>>s2;
if(s2=="no" || s2=="NO" ){
   break;
}
}
cout<<"The required result is "<<c;
return 0;
}