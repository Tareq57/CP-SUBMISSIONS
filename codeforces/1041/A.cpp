#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[1001],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(n));
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]!=1)
        {
            sum=sum+(a[i+1]-a[i]-1);
        }

    }
    cout<<sum<<endl;
    return 0;

}