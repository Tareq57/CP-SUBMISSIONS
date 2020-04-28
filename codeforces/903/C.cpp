
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[5001],m,sum=1;
    m=sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(n));
    for(int i=n-1;i>0;i--)
    {
        if(a[i]==a[i-1])
        {
            for(int j=i;j>=0;j--)
            {
                if(a[j]==a[j-1])
                {
                    sum++;
                }
                else
                {
                    if(m<sum)
                    {
                        m=sum;

                    }
                    sum=1;
                    break;
                }
            }
        }
    }
    cout<<m<<endl;

}