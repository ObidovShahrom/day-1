#include<iostream>
using namespace std;
int main (){
	float v;
	int p,f;
	const float g=9.81;
	cout<<"v=";
	cin>>v;
	cout<<"p=";
	cin>>p;
	f=p*v*g;
	cout<<"f="<<f<<endl;
	return 0;
}
