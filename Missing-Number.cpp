#include <iostream>
 
using namespace std;
int main()
{
    long long n,N,r,sum=0;
    cin>>N;
    r=N;
    while(r>1){cin>>n; sum+=n; r--;}
    cout<<N*(N+1)/2-sum;
    return 0;
}
