#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,diagonal1=0,diagonal2=0,sum=0;
    cin>>n;
    int squareMat[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>squareMat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        diagonal1=diagonal1+squareMat[i][i];
    }
    for(int j=0;j<n;j++)
    {
        diagonal2=diagonal2+squareMat[j][n-j-1];
    }
    sum=abs(diagonal1-diagonal2);
    cout<<sum;
return 0;
}

