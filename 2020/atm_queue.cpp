#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    freopen("/home/swaraj/KickStart/inp.txt","r",stdin);
    freopen("/home/swaraj/KickStart/op.txt","w",stdout);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n,x;
        cin>>n>>x;
        map<int,vector<int> > m;
        for(int i=1;i<=n;i++){
            int d;
            cin>>d;
            m[(d-1)/x].push_back(i);
        }
        cout<<"Case #"<<t<<": ";
        for(auto it: m){
            for(int k:it.second) cout<< k << " ";
        }
        cout<<'\n';
    }
}