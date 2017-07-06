#include<bits/stdc++.h>

using namespace std;

bool moveCheck(int position,char ch,int colum,int row){
    if(ch=='S')
        position+=colum;
    else if(ch=='N')
        position-=colum;
    else if(ch=='E'){
        position++;
        if((position%colum)==1)
            return false;
    }
    else if(ch=='W'){
        position--;
        if(!(position%colum))
            return false;
    }
    if(position<=0||position>colum*row)
        return false;

    return true;
}

int main()
{
    freopen("int.txt","r",stdin);
    char grid[105*105];
    int n,m,p,mv,ck[105*105];
    bool loop;
    while(scanf("%d%d%d",&n,&m,&p)==3&&n>0){
         stack< int > stk;
         loop=false;
         stk.push(p);
         memset(ck,0,sizeof(ck));
         for(int i=1;i<=n*m;i++)
            cin>>grid[i];
         mv=1;
         ck[p]++;
         while(moveCheck(p,grid[p],m,n)){
            if(grid[p]=='S')
                p+=m;
            else if(grid[p]=='N')
                p-=m;
            else if(grid[p]=='E')
                p++;
            else if(grid[p]=='W')
                p--;

            stk.push(p);
            ck[p]++;
            if(ck[p]>1){
                loop=true;
                break;
            }
            mv++;
         }
        int cont=1,l;
        if(loop){
            l=stk.top();
            stk.pop();
            mv--;
            while(l!=stk.top()){
                cont++;
                mv--;
                stk.pop();
            }
        printf("%d step(s) before a loop of %d step(s)\n",mv,cont);

        }
        else
            printf("%d step(s) to exit\n",mv);
    }

    return 0;
}
