#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("int.txt","r",stdin);

    int t,ck[3650],p,n,h[3650],days,c;
    cin>>t;
    while(t){
        memset(ck,0,sizeof(ck));
        cin>>n>>p;
        days=0;
        for(int i=0;i<p;i++){
            cin>>h[i];
            days+= n/h[i];
        }
        for(int i=0;i<p;i++){
            for(int j=h[i];j<=n;j+=h[i]){
                    ++ck[j];
                    c=0;
                if( (j%7)==0 || (j%7)==6 )
                    --days,c=1;
                if(ck[j]>1 && c==0)
                    --days;
            }
        }
        cout<<days<<endl;
        --t;
    }
    return 0;
}
