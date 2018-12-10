# include <bits/stdc++.h>

using namespace std;
typedef long long LL;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
# pragma comment(linker, "/STACK:2000000")
const int Size = (int)1e4;
# include <bits/stdc++.h>

using namespace std;
typedef long long LL;

struct Hashing {
    int *hash1, *hash2;
    int *inv1, *inv2;
    int n;
    LL mod1 = (LL) 1e9 + 97, mod2 = (LL) 1e9 + 9;
    LL multiplier1 = 43, multiplier2 = 31;
    LL invMultiplier1 = 441860508, invMultiplier2 = 838709685;
    // invMultiplier = modInv(multiplier, mod) //

    Hashing() {}

    Hashing(string &s) {
        build_hash(s);
    }

    void build_hash(string &s) {
        n = s.size();
        hash1 = new int[n + 1];
        hash2 = new int[n + 1];
        inv1 = new int[n + 1];
        inv2 = new int[n + 1];

        hash1[0] = hash2[0] = 0;
        inv1[0] = inv2[0] = 1;

        LL p1 = 1,  p2 = 1;
        for (int i = 0; i < n; i++) {
            hash1[i + 1] = (hash1[i] + s[i] * p1) % mod1;
            p1 = (p1 * multiplier1) % mod1;
            inv1[i + 1] = inv1[i] * invMultiplier1 % mod1;
            hash2[i + 1] = (hash2[i] + s[i] * p2) % mod2;
            p2 = (p2 * multiplier2) % mod2;
            inv2[i + 1] = inv2[i] * invMultiplier2 % mod2;
        }
    }


    LL getHash(int i, int j) { //0-based
        return getHash_2(i, j - i + 1);
    }

    LL getHash_2(int i, int len) { //i is 0  based indexed
        return (((hash1[i + len] - hash1[i] + mod1) * inv1[i] % mod1) << 32)
               + (hash2[i + len] - hash2[i] + mod2) * inv2[i] % mod2;
    }

    LL revHash(int i, int j) { ////0-based
        return getHash(n - j - 1, n - i - 1);
    }

    void clear() {
        delete (hash1), delete (hash2), delete (inv1), delete (inv2);
    }
};

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }

    int n, ok = 0;
    while (cin >> n){
        if(ok) cout<<endl;
        string s, p;
        cin>>p>>s;
        Hashing hs1(s), hs2(p);
        LL cnt = 0, y, x = hs2.getHash(0, p.size() - 1);
        for (int i = 0; i < s.size(); i++) {
            y = hs1.getHash_2(i, p.size());
            if (x == y) {
                cout<<i<<endl;
            }
        }
        ok = 1;
        hs1.clear();
        hs2.clear();
    }

    return 0;
}
