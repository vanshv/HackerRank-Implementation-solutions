#include<iostream>
using namespace std;
int main()
{
long int s, t, a, b, m, n, appans = 0, orrans = 0;
cin>>s>>t>>a>>b>>m>>n;
long int app[m], orr[n];
for (long int z = 0; z<m; z++){
	cin>>app[z];
	app[z] += a;
	if(s<=app[z] && app[z]<=t)
		appans++;
}
for (long int y = 0; y<n; y++){
	cin>>orr[y];
	orr[y] += b;
	if(s<=orr[y] && orr[y]<=t)
		orrans++;
}
cout<<appans<<"\n"<<orrans;
return 0;
}
