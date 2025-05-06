#include<bits/stdc++.h>
using namespace std;
struct Player{
string name;
int juersy_no;
int age;
int score;
int wicket;

};
void input(Player player[],int n){
    for(int i=0;i<n;i++){
cout<<"enter the details of the player "<<i+1<<endl;
cin>>player[i].name;
cout<<"enter the juersy number :"<<endl;
cin>>player[i].juersy_no;
cout<<"enter the age of the player "<<endl;
cin>>player[i].age;
cout<<"enter the score of the player "<<endl;
cin>>player[i].score;
cout<<"enter the player wicket"<<endl;
cin>>player[i].wicket;
    }
}
void print(Player player[],int n){
for(int i=0;i<n;i++){
    if(player[i].wicket>30){
        cout<<"Bowler - "<<player[i].name<<endl;
    }
}
cout<<"another loop for the second condition "<<endl;
for(int i=0;i<n;i++){
    if(player[i].wicket>30 && player[i].score>=500){
        cout<<" Allrounder - "<<player[i].name<<endl;
    }
}
cout<<"another loop for the third condition "<<endl;
for(int i=0;i<n;i++){
  if(player[i].score>800){
    cout<<" Batsman - "<<player[i].name<<endl;
  }
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n=4;
Player player[n];
input(player,n);
print(player,n);
}
