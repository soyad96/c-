#include<bits/stdc++.h>
using namespace std;
int main(){
int n; int m;
cin>>n>>m;
int arr[n][m];
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>arr[i][j];
    }
}
cout <<" the array before sort "<<endl;;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(arr[i][i]<arr[j][j]){
            swap(arr[i][i],arr[j][j]);
        }
    }
}
cout<<" after the sort the diagonal element \n";
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
