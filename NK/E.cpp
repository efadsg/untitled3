//全都要参与进来
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2035][2035];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    //最终方阵会分割成若干个相等的极小方阵，而且边长是n个最大质因子
    int maxn=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int flag=0;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)    continue;
            else    maxn=i;
        }
        else    continue;
    }
    if(maxn==0)    maxn=n;
    //找到各个方阵的最大值
    int ans=0;
    for(int i=1;i<=n;i+=maxn)
        for(int j=1;j<=n;j+=maxn)
        {
            int nn=0;
            for(int k=i;k<i+maxn;k++)
                for(int l=j;l<j+maxn;l++)
                    nn=max(nn,a[k][l]);
            ans+=nn;
        }
    cout<<ans<<endl;
    return 0;
}