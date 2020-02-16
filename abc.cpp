#include<bits/stdc++.h>
using namespace std;
int dif(int a,int b)
{
	return abs(a-b);
}
int main()
{
	vector<int> a(3);
	int d;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cin>>d;
	sort(a.begin(),a.end());
	int x,y,z;
	x=abs(a[0]-a[1]);
	y=abs(a[1]-a[2]);
	z=abs(a[0]-a[2]);
	int c=0;
	while(x<d || y<d || z<d)
	{
		if(x<d)
		{
			c=c+dif(x,d);
			a[0]=a[0]-dif(x,d);
			x=dif(a[0],a[1]);
			z=dif(a[0],a[2]);
		}
		if(y<d)
		{
			c=c+dif(y,d);
			a[2]=a[2]+dif(y,d);
			y=dif(a[1],a[2]);
			z=dif(a[0],a[2]);
		}
	
	}
	cout<<c<<endl;
	cout<<"HumBO Humbo Humbo added in don branch"<<endl;
}
