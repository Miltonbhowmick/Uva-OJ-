#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main()
{
    map<long long ,long long > mp;
    map<long long ,long long > ::iterator low,up;
    long long a,n,q;
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%lld",&a),mp[a]=1;
    cin>>q;
    while(q--){
        scanf("%lld",&a);
        low=mp.lower_bound(a);
        up=mp.upper_bound(a);
        if(low->first==a){
            low--;
            if(low==mp.end()) cout<<"X ";
            else
                cout<<low->first<<" ";
        }
        else{
            low--;
            if(low==mp.end()) cout<<"X ";
            else cout<<low->first<<" ";
        }
        if(up!=mp.end()) cout<<up->first<<endl;
        else cout<<"X"<<endl;
    }

    return 0;
}
