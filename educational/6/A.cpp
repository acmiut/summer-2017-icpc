#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int r[1000*100+100];

int n;

bool ok(int u){
    int k=u;
    for(int i=0;i<n;i++){
        if(k<r[i+1]-r[i])
            return false;
        if(k==r[i+1]-r[i])
            k--;
    }
    return true;
}

int solve(int mini,int maxi){
    int cent=(mini+maxi)/2;
    if(mini==maxi)
        return mini;
    bool mark=ok(cent);
    if(mark&&(!ok(cent+1)))
        return cent;
    if(mark)
        return solve(mini,cent);
    else
        return solve(cent+1,maxi);
}

int main(){
    int t;
    cin>>t;
    int o=0;
    while(t--){
        o++;

        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>r[i];
        int mini=-1;
        int maxi=0;
        for(int i=n;i>=1;i--){
            mini=max(mini,r[i]-r[i-1]);
            if(maxi<r[i]-r[i-1])
                maxi=r[i]-r[i-1];
            else if(maxi==r[i]-r[i-1])
                maxi++;
        }
        cout<<"Case "<<o<<": "<<solve(mini,maxi)<<endl;

    }
    return 0;
}
