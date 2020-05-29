#include <iostream>

using namespace std;
int main()
{
    long long  m,n,val,total=0;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        cin>>val;
        total+=max(00LL,m-val);
        m=max(val,m);
    }
    cout<<total<<"\n";
    return 0;
}
