#include<bits/stdc++.h>
using namespace std;
#define intl long long int
#define ll long long
#define pb push_back
#define ipair pair<intl,intl>
#define mp make_pair
#define fo(i,s,e) for(intl i=s;i<=e;i++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
int main() 
{ 
  //  fastio;
 intl t;
  cin>>t;
  while(t--)
  {
    int n,i;
		cin>>n;
		ll a[n];
		ll s=0,mx=INT_MIN,ech,ans;
		for(i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			mx=max(mx,a[i]);
		}
		if(s%(n-1))
		ech=(s+n-1-s%(n-1))/(n-1);
		else
		ech=s/(n-1);
		if(mx>ech){
			ech=mx;
			ans=ech*(n-1)-s;
		}
		else{
			ans=ech*(n-1)-s;
		}
		cout<<ans<<endl;
    
  }
  
      return 0; 
}
