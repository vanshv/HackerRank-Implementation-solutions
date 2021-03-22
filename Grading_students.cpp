#include<iostream>
using namespace std;
int main()

{
int n; 
cin>>n;
int marks[n-1], grades[n-1];
for(int j = 0; j<n; j++){
	int k;
    cin>>marks[j];
	if (marks[j]<38)
		grades[j] = marks[j];
	else{
		k = marks[j]%10;
		if (2<k && k<5) 
			k = 5;
		else if (7<k && k<=9)
			k = 10;
		else
			k = k;
	    grades[j] = marks[j] - marks[j]%10 + k;      
	}
    cout<<grades[j]<<"\n";
}

return 0;
}