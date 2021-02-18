#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m,l;
	cin>>m>>n;
	l=max(m,n);
	int a[l][l]={' '};
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=1;i<l;i++)
		for(j=0;j<=i;j++)
			swap(a[i][j],a[j][i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;							
}
