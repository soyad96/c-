#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int oddcount=0;
    int eventcount =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            eventcount++;
        }
        else {
            oddcount++;
        }
    }
    if(eventcount==n){
        cout<<"no\n";
    }
    else if(oddcount==n&& n%2==0){
        cout<<"no\n";
    }
    else if(n==(eventcount+oddcount)){
            cout<<"yes\n";

    }
    else {
        cout<<"yes\n";
    }


}
    return 0;
}


