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

// int eu_gcd(int a,int b){
//     if(b== 0) return a;
//     return (max((a%b),b),min((a%b),b));
// }

int ex_gcd(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    //int gcd = eu_gcd(a,b);
    int x0, y0;

    int g = ex_gcd(b,(a%b),x0,y0);

    x = y0;
    y = x0 - (a/b)*y0;
    return g;

}

void solve(){
   int a,b,c,g,x,y;
   cin >> a>>b>>c;
   if(a>b) {
      g = ex_gcd(a,b,x,y);
   }
   else g = ex_gcd(b,a,y,x); // swaping error fixed

   if(c%g == 0) cout<< "X = "<<(c/g)*x << " ,Y = "<<(c/g)*y;
   else cout<< "No Solution";
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout<<'\n';
    }
    return 0;
}
