#include <iostream>
#include <string>
using namespace std;
class Contactbook
{
     string d[100], e[100], f[100], g[100], l;
    int counter;//this is not a static variable so if you intiaize it in one object  then only gets increament when the same object is made to run again 
public:
    void initcounter(void) { counter = 0; }
    void details(void);
    void display(void);
};

void Contactbook ::details(void)/*here the for loop is making the details to run again so we are not required to write the detail function again and again
                                  to increament the counter variable rather it is getting implement with the loop itself*/
{
 for(int i=1;i<=100;i++){
        cout<<i<<endl;
        cout<<" NAME - ";
        cin>>d[counter];
        cout<<" PHONE -";
        cin>>e[counter];
        cout<<" ADDRESS-";
        cin>>f[counter];
        cout<<" PINCODE-";
        cin>>g[counter];
        counter++;
        cout<<"want to add more cntacts(yes/no)??";
        cin>>l;
        if(l=="no"){
            break;
        }
 }      
        
}
void Contactbook ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << i+1 << endl;
        cout << " NAME - " << d[i] << endl;
        cout << " PHONE -" << e[i] << endl;
        cout << " ADDRESS-" << f[i]<< endl;
        cout << " PINCODE-" << g[i] << endl;
    }
}

int main()
{
    
    Contactbook Rampur;
    Rampur.initcounter();
    Rampur.details();
    Rampur.display();

    return 0;
}