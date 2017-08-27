#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	int n,m;
	while(cin>>n){
		vector <pair<int,int> >aza;
		for(int i=1;i<=n;i++){
			int u;
			cin>>u;
			aza.push_back(make_pair(u,i));
		}
		sort(aza.begin(),aza.end());
		vector <int> adad;
		for(int i=0;i<n;i++)
			adad.push_back(aza[i].first);
		cin>>m;
		long long p,q;
		for(int i=0;i<n,adad[i]<=m/2;i++){
			int u=lower_bound(adad.begin(),adad.end(),m-adad[i])-adad.begin();
			if(adad[u]==m-adad[i]){
				p=adad[i];
				q=adad[u];


			}
		}
		cout<<"Peter should buy books whose prices are "<<p<<" and "<<q<<'.'<<endl<<endl;

	}
	return 0;
}
