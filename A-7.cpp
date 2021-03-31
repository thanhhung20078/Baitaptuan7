#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string a,b;
	cout<<"Nhap vao xau a,b: "<<endl;
	cin>>a>>b;
	int s = 0;
	int possession = a.find(b);
	do{
		s++;
    }
	while(possession >= 0);
	cout<<s;
	return 0;
}
