
#include<iostream>
using namespace std;

int main(){
    int x1, x2, v1, v2;
    
    cin>>x1>>v1>>x2>>v2;
    
    int i = 0;
    for(; i<10000; i++) if ((x2 - x1) == i*(v1 - v2)) break;

    if ((x2 - x1) == i*(v1 - v2)) cout <<"YES";

    if ((x2 - x1) != i*(v1 - v2)) cout <<"NO";

    return 0;

}