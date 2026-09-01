#include<iostream>
using namespace std;

class rec{

  double len;
  double wid;
public: rec(double l,double w){
 len =l;
  wid=w;
} 
void lenabre(){
cout<<"lenght"<<len<<endl;
cout<<"width"<<wid<<endl;
}

void dis(){
 cout<<"area"<<len*wid<<endl;

}

};
int main (){
rec o(45,5);
o.lenabre();
o.dis();
return 0;


}
