#include<iostream>
#include"sum.h"
#include"dif.h"
#include<cmath>
#include"prod.h"
#include"quot.h"

using namespace std;

int main()
{
	int a = 5, b = 2;
	cout<<"Hello world!!!"<<endl;
	cout<<a<<" + "<<b<<" = "<< sum(a,b)<<endl;
	cout<<a<<" - "<<b<<" = "<< dif(a,b)<<endl;
	cout<<a<<" ^ "<<b<<" = "<< pow(a,b)<<endl;
	cout<<a<<" * "<<b<<" = "<< prod(a,b)<<endl;
	cout<<a<<" / "<<b<<" = "<< quot(a,b)<<endl;
}
