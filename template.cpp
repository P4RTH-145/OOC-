#include<iostream>
using namespace std;

template <class t>
t add(t a,t b){
return a+b;
}
int main(){
cout<<"sum of int is:"<<add(53,53)<<endl;
cout<<"sum of float is:"<<add(5.3,5.3)<<endl;
cout<<"sum of char is:"<<add<char> ('P',1)<<endl;
}
