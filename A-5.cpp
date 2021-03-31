#include<iostream>
using namespace std;
char* weird_string() {
 char c[] = “123345”;
 return c;
}
int main()
{
	char s;
	cin>>s;
	weird_string(s);
	cout<<weird_string(s);
}
// canh bao sai dia chi vi truy cap khong hop le
