#include<iostream>
using namespace std;

class v{
public:
     v(){cout<<"This a vehicle is\n";}
};

class car:public v{
public:
     car(){cout<<"this is  a vehicle  car \n";}

};
class bus:public v{
public:
     bus(){cout<<"this is  a vehicle bus \n";}

};
int main(){
car b;
bus c;


}
