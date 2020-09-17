#include<iostream>
#include<vector>
#include<map>
#define R i,j+1
#define L i,j-1
#define U i-1,j
#define D i+1,j
#define mp(i,j) make_pair(i,j)
#define pb(i) push_back(i);
using namespace std;
int r,c,min_nbr = 1001;
bool visited[50][50] = {false};
map<pair<int, int>, vector<pair<int,int> > > nbrs;

bool is_boudnary_cell(int i,int j){
    return (i == 0 or i == r-1 or j == 0 or j == c-1);
}

void solve(int arr[][50], int i, int j,int& index){
    if(!is_boudnary_cell(i,j) and !visited[i][j]){
        visited[i][j] = true;
        int cell = arr[i][j], r = arr[i][j+1], l = arr[i][j-1], u = arr[i-1][j], d = arr[i+1][j];
        nbrs[mp(i,j)].pb(mp(i,j));
        if(cell == r and !visited[i][j-1]){
            nbrs[mp(i,j)].pb(mp(i,j+1));
            index++;
            solve(arr,R,index);
        }
        else if(cell == l and !visited[i][j+1]){
            nbrs[mp(i,j)].pb(mp(i,j-1));
            index++;
            solve(arr,L,index);
        }
        else if(cell == u and !visited[i-1][j]){
            nbrs[mp(i,j)].pb(mp(i-1,j));
            index++;
            solve(arr,U,index);
        }
        else if(cell == d and !visited[i+1][j]){
            nbrs[mp(i,j)].pb(mp(i+1,j));
            index++;
            solve(arr,D,index);
        }
        else if(cell < r and !visited[i+1][j]){
            nbrs[mp(i,j)].pb(mp(i+1,j));
            index++;
            solve(arr,D,index);
        }
    }
}
int main(){
    freopen("/home/swaraj/KickStart/inp.txt","r",stdin);
    freopen("/home/swaraj/KickStart/op.txt","w",stdout);
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        cin>>r>>c;
        int arr[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        
    }
}