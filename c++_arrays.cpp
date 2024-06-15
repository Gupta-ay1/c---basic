#include <iostream>
using  namespace std;
int main(){
int i=0;
int zebra[5]={23,45,65,4445,55};
while( i<5){
cout<<"the value of zebra "<<i<<" "<<zebra[i]<<endl;
i++;


}
int *p=zebra;//stores the address of the first block of array,(p+1)-stores the address of second block of array
for(int j=0;j<5;j++){
cout<<(p+j)<<endl;
}
for(int k=0;k<5;k++){
cout<<*(p+k)<<endl;//putting star before(p++)will give you the values stored in that array one by one



}
int kela[7]={1,2,2,3,4,5};
cout<<kela[6]<<endl;
//In C++, when you create an array of size 7 and initialize it with only 6 values, the remaining elements will be set to zero if the array is initialized in a way that zero-initialization applies. However, if the array is partially initialized without zero-initialization, the remaining elements will contain indeterminate values.
cout<<kela[3]+zebra[3]<<endl;//addition of elements in array just as list in python 
cout<<kela[3]-zebra[4]<<endl;
cout<<kela[4]*3<<endl;
char tiger[5]={"a""e""j""k"};//arrays of char are never seperated by a comma
cout<<tiger[1];


















return 0;
}