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


string mod_s(string a,string b){
    while(a.size()>= b.size() && a.substr(0,b.size())==b){
        a = a.substr(b.size());
    }
    return a;
}

string gcds(string s1,string s2){
    if(s2.empty()) return s1;
    string md = mod_s(s1,s2);
    if(md.size()>= s2.size()) return "";
    return gcds(s2,md);
}


void solve(){
   string s1,s2,ans;
   cin >> s1 >> s2;
   //cout<< s1 << s2;
   if(s1.size()>s2.size()){
     cout<< gcds(s1,s2);
   }
   else cout<< gcds(s2,s1);

   //cout<< ans;
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
        cout<<'\n';
    }
    return 0;
}
