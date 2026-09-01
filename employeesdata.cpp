#include<iostream>
#include<string>
using namespace std;
class employee{
string name[100],id[100],address[100],mob[100];
double salary[50];
int no;
        
public:void input(){
    cout << "enter the number of employees" << endl;
    cin >> no;
  for(int i=0;i<no;i++){
    cout << "entry employee name" << endl;
    cin >> name[i];
    cout << "enter the id" << endl;
    cin>>id[i];
    cout << "enter the address" << endl;
    cin>>address[i];
    cout << "enter the mobile no." << endl;
    cin>>mob[i];
    cout << "enter the salary" << endl;
    cin>>salary[i];
  }
}



   void pass(){
        for(int i=0;i<no;i++){
         cout << "--------------------------" << endl;
         cout << "the employee name is " <<name[i]<< endl;
         cout << " the id is" << id[i]<<endl;
         cout << " the address is " <<address[i]<<endl;
         cout << " the mobile no. is " <<mob[i]<< endl;
         cout << " the salary is " <<salary[i]<< endl;
         }
      
   }
};

int main()
{
  employee s;
  s.input();
  s.pass();
      cout << "I am the best by all the world!" << endl;
      return 0;
}