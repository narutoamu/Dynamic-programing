/*input
5
5 6 4 7 4 
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	int A[n],res=1;
	int Z[n][2];
	for(int i = 0; i < n; i++)
     Z[i][0] = Z[i][1] = 1;
	for(int i=0; i<n; i++)
	 cin>>A[i];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(A[j] < A[i] && Z[i][0] < Z[j][1]+1)
				Z[i][0]=Z[j][1]+1;
			if(A[j]>A[i] && Z[i][1]<Z[j][0]+1)
				Z[i][1]=Z[j][0]+1;
		}
			  if(res<max(Z[i][0],Z[i][1]))
			  	res = max(Z[i][0],Z[i][1]);
	}
	cout<<res<<endl;
	return 0;
}