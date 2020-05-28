#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    int count=1,max=1;
    cin>> str;
    string::iterator it;
    for(it=str.begin() ; it!=str.end()-1 ; it++){
        if(*it==*(it+1)){
            count++;
            if(count>max){ max=count; }
        }else{
            count=1;
        }
    }
    cout<<max<<"\n";
    return 0;
}
