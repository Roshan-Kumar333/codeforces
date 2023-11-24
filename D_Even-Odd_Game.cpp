#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        long long element;
        while(n--){
            cin >> element;
            a.push_back(element);
        }
        long long alice = 0;
        long long bob = 0;
        sort(a.begin(), a.end());
        bool aliceTurn = true;
        while(a.empty()==false){
            if(aliceTurn){
                if(a.back()%2==0){
                    alice += a.back();
                    aliceTurn = false;
                }
                else{
                    aliceTurn = false;
                }
            }
            else{
                if(a.back()%2!=0){
                    bob += a.back();
                    aliceTurn = true;
                }
                else{
                    aliceTurn = true;
                }
            }
            a.pop_back();
        }
        if(alice>bob){
            cout << "Alice" << endl;
        }
        else if(bob>alice){
            cout << "Bob" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
        return 0;
}