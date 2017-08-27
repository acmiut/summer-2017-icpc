#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n,m;

long long v[1100];

bool ok(long long k){
    int ted=1;
    long long zarf=k;
    for(int i=1;i<=n;i++)
        if(zarf-v[i]>=0)
            zarf-=v[i];
        else{
            ted++;
            zarf=k-v[i];
            if(ted>m)
                return false;
        }
    return true;
}

int solve(long long mini,long long maxi){
    long long cent=(mini+maxi)/2;
    if(mini==maxi)
        return cent;
 //   cerr<<cent<<endl;
    bool mark=ok(cent);
    if(mark&&(!ok(cent-1)))
        return cent;
    if(mark)
        return solve(mini,cent);
    else
        return solve(cent+1,maxi);
}

int main(){
    while(cin>>n>>m){
        long long maxi=0;
        long long mini=0;
     //   cerr<<'h'<<endl;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            maxi+=v[i];
            mini=max(mini,v[i]);
        }
        maxi=maxi/m+mini;
        if(mini>maxi)
            swap(mini,maxi);
       // cerr<<mini<<' '<<maxi<<endl;
        cout<<solve(mini,maxi)<<endl;

    }
    return 0;
}
