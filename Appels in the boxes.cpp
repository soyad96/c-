#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define testcase int tt; cin>>tt; for(int tc=1;tc<=tt;tc++)
void solve(){
ll n;
cin>>n; ll k; cin>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
    v.push_back(a);
}
ll mn=*min_element(v.begin(),v.end());
ll mx=*max_element(v.begin(),v.end());
ll d=mx-mn;
sort(v.begin(),v.end());
if(d>k+1){
    cout<<"Jerry\n";
    return;
}
ll f=0;
for(ll i=0;i<n;i++){
    if(v[i]==mx){
        f++;
    }
}
if(d==k+1&& f>1){
    cout<<"Jerry\n";
}
else {
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=v[i];
    }
    if(sum%2==0){
        cout<<"Jerry\n";
    }
    else {
        cout<<"Tom\n";
    }
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
testcase{

solve();
}
return 0;

}
