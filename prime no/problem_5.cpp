#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i<b; i++)
#define FORk(i,a,b,k) for(int i = (a); i<b; i+=k)
#define RFOR(i,a,b) for(int i = (a); i>=b; i--)
#define RFORk(i,a,b,k) for(int i = (a); i>=b; i-=k)



void solve(){
    //step1
    const int N = 1000;
    bool pr[N+1];
    vector<int> vec_prime;
    FOR(i,2,N+1) pr[i] = true;
    pr[0] = false;
    pr[1] = false;
    for(int i = 0; i*i<N+1 ; i++){
        if(pr[i]){
            for(int j = i*i ; j<=N;j+=i){
                pr[j] = false;
            }
        }
    }
    //step2
    FOR(i,2,N+1){
        if(pr[i]) vec_prime.push_back(i);
    }

    //step3
    vector<bool> cb(N+1,false);
    int n,k;
    cin >> n >> k;
    FOR(i,2,N){
        int ele = vec_prime[i] + vec_prime[i+1] +1;
        if(ele > n) break;
        if(pr[ele]){
            cb[ele] = true;
            
        } 
    }
    //step 4
    int count = 0;
    for(int i =2;i<n+1;i++){
        if(cb[i]) count++;
    }
    //cout<< count;
    if(count >= k) cout << "YES";
    else cout << "NO";
}


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
