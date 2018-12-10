# include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int nextInt() { int n; cin>>n; return n; }
void print(int n){ cout<<n<<endl; return; }

map<string, int> mp;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int T = nextInt();
    for (int kase = 1; kase <= T; kase++) {
        cout<<"Case "<<kase<<":"<<endl;
        string str;
        int n = nextInt();
        cin.ignore();
        for (int i = 0; i < n; ++i) {

            cin>>str;
            if(str.size() > 3)
                sort(str.begin()+1, str.end()-1);
            mp[str]++;
        }

        int q = nextInt();
        cin.ignore();
        for (int j = 0; j < q; ++j) {

            ll ans = 1;
            getline(cin, str);

            stringstream ss;
            ss<<str;

            while(ss>>str){
                if(str.size() > 3)
                    sort(str.begin()+1, str.end()-1);
                ans *= mp[str];
            }
            print(ans);
        }
        mp.clear();
    }

    return 0;
}

