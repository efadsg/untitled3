#include <iostream>

using namespace std;
int  main(){
    long long n,m,t,i,ans;
    cin >> t;
    while (t--){
        scanf("%lld %lld",&n,&m);
        if (m <= n - m)printf("%lld\n",m*4);
        else{
            i = n- m ;
            ans = i * 4 ;
            m -= i;
            ans += ((m +1)/2) * 4;
            printf("%lld\n",ans);
        }
    }
    return  0 ;
}