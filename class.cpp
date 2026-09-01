#include<iostream>
#include <string>
using namespace std;
class student{
private:int roll;
        string name;
        float mark;
public:void input(){
     cout<<"input the roll no.:";
     cin>>roll;
     cout<<"input the name";
     cin>>name;
     cout<<"enter the mark ";
     cin>>mark;
}
      void display(){
      cout<<"roll no is\n"<<roll<<"\n";
      cout << "name is "<<name<<"\n";
      cout << "mark is "<<mark<<"\n";
      }
};

int main()
{
student s;
 s.input();
 s.display();
    cout << "Hello World!" <<endl<<"happy";
    
}