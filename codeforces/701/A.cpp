#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],acop[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        acop[i]=a[i];
    }
    sort(acop,acop+(n));
    for(int i=0,j=n-1;i<n/2,j>=n/2;++i,j--)
    {
        for(int k=0;k<n;++k)
        {
            if(a[k]==acop[i])
            {
                cout<<k+1<<" ";
                a[k]=0;
                break;
            }
        }
        for(int k=0;k<n;k++)
        {
            if(a[k]==acop[j])
            {
                cout<<k+1<<endl;
                a[k]=0;
                break;
            }
        }
    }

    return 0;

}