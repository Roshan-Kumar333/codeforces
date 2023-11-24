#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin >> s;
        for (int i = 0; i < s.size();i++){
            if(s[i]=='0')
                a--;
            else
                b--;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (s[s.size() - i - 1] == '?')
                {
                    if (a > b)
                    {
                        s[i] = '0';
                        s[s.size() - i - 1] = '0';
                        a -= 2;
                    }
                    else{
                        s[i] = '1';
                        s[s.size() - i - 1] = '1';
                        b -= 2;
                    }
                }
            }
            else if (s[s.size() - i - 1] == '1'){
                s[i] = '1';
                b -= 1;
            }
            else{
                s[i] = '0';
                a -= 1;
            }                   
        }
        int aa(0), bb(0);
        for (int i = 0; i < s.size();i++){
            if(s[i]=='1')
                bb++;
            else
                aa++;
        }
        cout << s << " ";
        if(a==aa and b==bb)
            cout << s << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}

