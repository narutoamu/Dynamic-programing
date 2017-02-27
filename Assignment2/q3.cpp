/*input

*/
#include <bits/stdc++.h>
using namespace std; 
int  binary_search(int dp[], int l,int r,int key)
{
    while(r>l+1)
    {
        int m=l+(r-l)/2;
        if(dp[m]>=key)
        {
        	r=m;
		}
        else
        {
        	l=m;
		}
    }
    return r;
}
 
int circle(int a[], int  l)
{
    int length=1;
    int dp[10001];
    memset(dp,0,sizeof(dp));
    dp[0]=a[0];
    for(int i=1;i<l;i++)
    {
        if(a[i]<dp[0])
        	dp[0]=a[i];
 
        else if(a[i]>dp[len-1])
        	{dp[length]=a[i];
                length++;
            }
        else
        	dp[binary_search(dp,-1,length-1,a[i])]=a[i];
    }
    return len;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
    	cin>>n;
    	int a[2*n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	a[i+n]=a[i];
        }
        int sol=0;
        for(int i=0;i<n;i++)
        {
        	sol=max(sol,circle(a+i,n));
        }
        cout<<sol<<endl;
    }
    return 0;
}