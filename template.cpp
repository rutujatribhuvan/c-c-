//with temp variable
/*
#include<iostream>
using namespace std;
template <class T>
void Swap(T &a,T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;

}
int main()
{
    int a,b;
    cout<<"enter two no";
    cin>>a>>b;
     
     cout<<"before swap";
     cout<<"\n value of a is="<<a;
     cout<<"\n value of b is="<<b;

     Swap(a,b);
    
    cout<<"\n after swaping";
    cout<<"\n a value is"<<a;
    cout<<"\n b value is"<<b;
    return 0;

}*/



//with temp variable
#include<iostream>
using namespace std;
template <class T>
void Swap(T &a,T &b)
{

    a = a+b; //a=30(10+20)
    b = a-b; //b=10(30-20)
    a = a-b;//a=20(30-10)

}
int main()
{
    int a,b;
    cout<<"enter two no";
    cin>>a>>b;
     
     cout<<"before swap";
     cout<<"\n value of a is="<<a;
     cout<<"\n value of b is="<<b;

     Swap(a,b);
    
    cout<<"\n after swaping";
    cout<<"\n a value is"<<a;
    cout<<"\n b value is"<<b;
    return 0;

}