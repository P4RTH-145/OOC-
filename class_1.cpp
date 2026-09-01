#include<iostream>
#include<string>
using namespace std;

class student{
 private: int roll;
          string name;
          float mark;

public:void input(){
  cout<<"Enter the Roll number\n";
  cin>>roll;
  cout<<"enter the student name \n";
  cin>>name;
  cout<<"enter the studrent mark \n";
  cin>>mark;
  }
    void display(){
    cout<<"--------student detail---------\n";
    cout<<"student Rollno:"<<roll<<endl;
    cout<<"student name:"<<name<<endl;
    cout<<"student mark:"<<mark<<endl;
  }

};
 
 int main(){

  student s;
  s.input();
  s.display();
return 0;

}
