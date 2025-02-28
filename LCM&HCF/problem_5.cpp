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

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(max(a%b,b),min(a%b,b));
}

void sol(int a, int b, int c){
    int gc = gcd(a,b);
    if(c%gc==0) cout<< "Yes"<<'\n';
    else cout<< "No"<<'\n';
}

void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   sol(a,b,c);
}


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    FOR(i,1,t+1){
        cout<<"Case"<<i<<": ";
        solve();
    }
    return 0;
}
