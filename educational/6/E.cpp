#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int ar[600][600];
int n,m;

vector <int> satr[600];

int bs(int x,int y,int shor,int maxi,int u){
   // cerr<<shor<<' '<<maxi<<endl;
    if(shor>maxi)
        return -1;
    if(shor==maxi)
        return shor+1;
    int mid=(shor+maxi)/2;
    if( (ar[x+mid][y+mid]<=u)&&(ar[x+mid+1][y+mid+1]>u) )
        return mid+1;
    if(ar[x+mid][y+mid]>u)
        return bs(x,y,shor,mid-1,u);
    else
        return bs(x,y,mid+1,maxi,u);
}



int main(){

    while(cin>>n>>m&&(n+m)){
        int x1,y1,x2,y2,ja;
        int l,u;
        for(int i=0;i<=n;i++)
            satr[i].clear();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if( (i<=n)&&(j<=m)){
                    cin>>ar[i][j];
                    satr[i].push_back(ar[i][j]);

                }

        int q;
        cin>>q;

        while(q--){
            cin>>l>>u;
            int ans=0;
            for(int i=1;i<=n;i++)
                if((ar[i][m]>=l)&&(ar[i][1]<=u) ){
                    vector<int>::iterator it=lower_bound(satr[i].begin(),satr[i].end(),l);
                    int ja=it-satr[i].begin()+1;
                    if( (ar[i][ja]>=l)&&(ar[i][ja]<=u) )
                    ans=max(ans,bs(i,ja,0,min(n-i,m-ja),u));
                 //   cerr<<i<<' '<<ja<<endl;
                }

          //  cerr<<endl;

            cout<<ans<<endl;
            if(q==0)
                cout<<"-"<<endl;

        }

    }
    return 0;
}
