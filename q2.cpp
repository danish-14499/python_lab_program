#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        vector<int>arr(26,0);
        for(int i=0;i<s.length();i++){
            arr[s[i]-97]++;
        }
        vector<int>ans;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int count=1;
        int flag=-1;
        if(count==k){
            flag=ans[ans.size()-1];
        }
        else{
          for(int i=ans.size()-2;i>=0;i--){
            if(ans[i]!=ans[i+1]){
                count++;
                if(count==k)
                {
                    flag=ans[i];
                    break;
                }
            }
        }
        }

        if(flag==-1){
            cout<<-1<<endl;
        }
        else{
            char ch='a';
            for(int i=0;i<26;i++){
                if(arr[i]==flag){
                    ch=i+'a';
                    break;
                }
            }
            cout<<ch<<endl;
        }

    }
    
    return 0;
}
