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
class weel:public car,public bus{
public:
     weel(){cout<<"this is  a this is fourweer\n";}

};
int main(){

weel c;

}
