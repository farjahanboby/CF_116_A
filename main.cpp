//----------mark it----------
#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,sum=0,m=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>m){
            m=sum;
        }
    }
    cout<<m<<endl;
    return 0;
}
