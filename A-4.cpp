#include<iostream>
using namespace std;
int finding(int *a,int max, int min,int k)
{
	int tb = (max+min)/2;
	if(k==a[tb]) 
	return tb+1;
	if(k>a[tb])
	return finding(a,max,tb,k);
	if(k<a[tb])
	return finding(a,tb,min,k);
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9},*p,k;
    cin>>k;
	p = a;int n = fiding(p,8,0,k);
	cout<<"vi tri so can tim la:"<<n;
	return 0;
}
