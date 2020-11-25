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
  fastio;
  intl t;
  cin>>t;
  while(t--)
  {
    intl n;
    cin>>n;
    // prime factorization of n
    vector<pair<int, long long>> val;
		for (long long i = 2; i * i <= n; ++i) {
			int cnt = 0;
			while (n % i == 0) {
				++cnt;
				n /= i;
			}
			if (cnt > 0) {
				val.push_back({cnt, i});
			}
		}
		if (n > 1) {
			val.push_back({1, n});
		}
    for(auto i:val)
      cout<<i.second<<" "<<i.first<<endl;
      cout<<endl;

  }
}
