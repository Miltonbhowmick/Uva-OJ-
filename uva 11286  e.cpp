#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,cont,mx;
    int high[1005];
    int v[10];
    while(scanf("%d",&n)==1&&n>0){
    map<long long ,int > mp;
    map<long long ,int > high;
    mx=0;
        for(int i=0;i<n;i++){
        long long int s=0;
            for(int p=0;p<5;p++)
                scanf("%d",&v[p]);
            sort(v,v+5);
            for(int p=0;p<5;p++){
                s+=(v[p]);
                s*=1000;
            }
            mp[s]++;
            if(mp[s]>=mx){
                mx=mp[s];
                high[mx]++;
            }
        }
        cout<<mx*high[mx]<<endl;
    }
    return 0;
}
