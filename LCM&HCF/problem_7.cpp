#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i<b; i++)
#define FORk(i,a,b,k) for(int i = (a); i<b; i+=k)
#define RFOR(i,a,b) for(int i = (a); i>=b; i--)
#define RFORk(i,a,b,k) for(int i = (a); i>=b; i-=k)
#define pb push_back

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<ull> vull;


int eu_gcd(int a, int b){
    if(b==0) return a;

    return eu_gcd(max((a%b),b),min((a%b),b));
}

bool isGoodArray(vector<int>& nums) {
    int g = 0;
    for(int i = 0; i<nums.size();i++){
        g = eu_gcd(nums[i],g);
    }
    
    if(g==1) return true;
    return false;
}

void solve(){
   vector<int> v = {12,4,7,5};
   bool ans = isGoodArray(v);
   if(ans == 1) cout<<"Good";
   else cout<< "Bad";
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
