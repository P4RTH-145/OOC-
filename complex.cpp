#include<iostream>
using namespace std;

class complex{
public:int real;
        int imag;
        
 complex(){
real=0;
imag=0; 

}
complex(int r,int i){
real=r;
imag=i;

}
complex addcomplex(complex c1,complex c2){
complex res;
res.real=c1.real+c2.real;
res.imag=c1.imag+c2.imag;
}
};

int main(){
complex c1(4,5);
cout<<"complex no.1is "<<c1.real<<"+i"<<c1.imag<<endl;
complex c2(9,8);
cout<<"complex no.2is "<<c2.real<<"+i"<<c2.imag<<endl;
complex c3;
c3=c3.addcomplex(c1,c2);
cout<<"sum of complexno.is "<<c3.real<<"+i"<<c3.imag<<endl;


}
