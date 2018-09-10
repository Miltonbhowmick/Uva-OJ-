
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,k,cont,ck;
    while(scanf("%llu%llu",&n,&k)!=EOF){
        ck=n;
        while(ck>=k){
            n+=ck/k;
            ck=(ck/k)+(ck%k);
        }
        cout<<n<<endl;
    }
    return 0;
}
