#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float,float);
int main(){
 int s,l,b;
 float r,bs,hi;
 cout<<"enter the squre side:";
 cin>>s;
 cout<<"enter the lenght of rectangle:";
 cin>>l;
 cout<<"enter the breath of rectangle:";
 cin>>b;
 cout<<"enter the radius of circle:";
 cin>>r;
 cout<<"enter the base:";
 cin>>bs;
 cout<<"enter the hight side:";
 cin>>hi;
 cout<<"area the squre :"<<area(s)<<endl;
 cout<<"area the rectangle :"<<area(l,b)<<endl;
 cout<<"area the circle :"<<area(r)<<endl;
 cout<<"area the traingle :"<<area(bs,hi)<<endl;
}
int area(int s){
return (s*s);
}
int area(int l,int b){
return (l*b);
}
float area(float r){
return (3.14*r*r);
}
float area(float bs,float hi){
return (0.5*bs*hi);
}
