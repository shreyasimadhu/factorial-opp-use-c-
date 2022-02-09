#include <iostream>
using namespace std;

class factorial{
    int i,fn,fact=1;
    public:
    factorial(){
        cout<<"Input Any Integer Number = ";
        cin>>fn;
        for(i=1;i<=fn;i++)
        {
            fact=fact*i;
        }
    }
    void display(void)
    {
        cout<<"Factorial Value of "<<fn<<" is = "<<fact;
    }
    
};

int main(){
    factorial Object1;
    Object1.display();
    return 0;
}



