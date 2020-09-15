#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int T=1;T<=t;T++){
        int n;
        cin>>n;
        scanf("\n");
        int maxletters = INT32_MIN;
        string maxstr;
        vector<string> strs;
        for(int i=0;i<n;i++){
            string str;
            getline(cin,str);
            set<char> st;
            for(char c:str){
                if(c >= 'A' and c <= 'Z'){
                    st.insert(c);
                }
            }
            if(maxletters < (int)st.size()){
                if(strs.size() > 0)
                    strs.clear();
                maxletters = st.size();
                maxstr = str;
                strs.push_back(str);
            }
            else if(maxletters == (int)st.size())
                strs.push_back(str);
        }
        if(strs.size() > 1){
            sort(strs.begin(),strs.end());
            cout<<"Case #"<<T<<": "<< strs.at(0)<<"\n";
        }
        else cout<<"Case #"<<T<<": "<< maxstr<<"\n";
    }
}
