#include <iostream>
 
using namespace std;
int main()
{
    long long n, last=2;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    if(n%2==0)
        last=1;
    for(auto i=n-1;i>=last;i-=2){
        cout<<i<<" ";
    }
    for(auto i=n;i>=1;i-=2){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
