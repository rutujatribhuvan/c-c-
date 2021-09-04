#include<iostream>
using namespace std;
class teacher
  {
    //public:
    int a,b,c;
   
  public:
  int add()
  {   cout<<"enter no"<<endl;
    cin>>a>>b;

     c=a+b;
    cout<<"addition is"<<c<<endl;
  }
  class student:public teacher
  {
   int addd()
   {
    int p,q,r;
       r=p+q;
     return r;
   }
  }
  };
  int main()
   {
    student s = student();
    s.add();
    //s.add();
    return 0;
   }