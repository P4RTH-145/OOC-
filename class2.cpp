#include<iostream>
#include<string>
using namespace std;

class employ{
private:string name[],address[],mob_no[],id[];
        float salary[];
        int no;

public:void input(){
cout<<"enter the no. of employee\n";
cin>>no;
for (int i=0;i<no;++i){
 cout<<"Enter the id\n";
  cin>>id[i];
  cout<<"enter the name[] \n";
  cin>>name[i];
  cout<<"enter the mobil no \n";
  cin>>mob_no[i];
 } 
}
void display(){

for (int i=0;i<no;++i){
 cout<<"Enter the id\n"<<id[i];
  cout<<"enter the name[] \n"<<name[i];
  cout<<"enter the mobil no \n"<<mob_no[i];
 }
}
  

};
 int main(){

  employ s;
  s.input();
  s.display();
return 0;

}
