#include<iostream>
using namespace std;

class v{
public:
     v(){cout<<"This a vehicle is\n";}
};

class weel{
public:
     weel(){cout<<"this is  a vehicle  4 weeler \n";}

};
class bus:public v, public weel{
public:
     bus(){cout<<"this is  a vehicle bus \n";}

};
int main(){

bus c;

}
