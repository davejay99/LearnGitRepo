#include<bits\stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int c=a[n-2]-a[0],b=a[n-1]-a[1];
	if(c>b)
	{
		cout<<b;
	}
	else{
	cout<<c;}
	return 0;
	cout<<"HOLA"<<endl;
	cout<<"HELI"<<endl;
}
