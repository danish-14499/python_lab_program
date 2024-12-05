#include <bits/stdc++.h>
using namespace std;

void check(string s, int i, vector<string>& arr, int v, string& x){
    if(i == s.length()){
        if(v <= 26 && v > 0){  // Ensure valid range and non-zero
            x.push_back((char)(v + 96));  // Correct conversion
            arr.push_back(x);
            x.pop_back();
        }
        return;
    }
    if(v > 26){  // Early return for invalid values
        return;
    }
    
    // Include current digit and proceed
    
         x.push_back((char)(v + 96));
    check(s, i + 1, arr, s[i] - '0', x);  // Correct digit extraction
    x.pop_back();

    
    // Combine digits for multi-digit numbers
    check(s, i + 1, arr, v * 10 + (s[i] - '0'), x);
}

int main(){
    string s = "1234";
    vector<string> x;
    string f = "";
    check(s, 0, x, 0, f);

    for(auto& str : x){
        cout << str << endl;
    }

    return 0;
}
