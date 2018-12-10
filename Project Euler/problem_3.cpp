/* Created by caffeines on 12/5/18 at 2:53 PM */
# include <bits/stdc++.h>

using namespace std;
# define DEBUGMODE forthright48
ifstream forthright48("input.txt");
typedef long long LL;

int nextInt() {
    int n;
    scanf("%d", &n);
    return n;
}

void print(int n) {
    printf("%d\n", n);
    return;
}


struct debugger {
    template<typename T>
    debugger &operator,(const T &v) {
        cerr << v << " ";
        return *this;
    }
} dbg;

# ifdef DEBUGMODE

# include <ctime>

clock_t tStart = clock();
# define debug(args...) {dbg,args; cerr<<endl;}
# define timeStamp debug ("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
# define bug printf("%d\n",__LINE__);
# else
# define debug(args...)  // Just strip off all debug tokens
# define timeStamp
# endif

#define N 10000201
vector<int> IsPrime(N);
vector<int> Prime;

/// Sieve Starts here
void sieve() {
    IsPrime[0] = IsPrime[1] = 1;
    for (int i = 4; i <= N; i += 2)
        IsPrime[i] = 1;

    int SQT = sqrt(N);
    for (int i = 3; i <= SQT; i += 2) {
        if (IsPrime[i] == 0) {
            for (int j = i * i; j <= N; j += 2 * i)
                IsPrime[j] = 1;
        }
    }

    // sieve ends here
    Prime.push_back(2);
    for (int i = 3; i < N; i += 2) {
        if (IsPrime[i] == 0)
            Prime.push_back(i);
    }
}

/// Prime Factorization Starts here

vector<LL> factors;

void factorize(LL n) {
    factors.clear();
    int sqrtn = sqrt(n);
    for (int i = 0; i < Prime.size() && Prime[i] <= sqrtn; i++) {
        if (n % Prime[i] == 0) {
            while (n % Prime[i] == 0) {
                n /= Prime[i];
                factors.push_back(Prime[i]); // If you want unique factors, take this line out of loop
            }
        }
        sqrtn = sqrt(n);
    }
    if (n != 1) {
        factors.push_back(n);
    }
}

int main() {

    if (forthright48) {
        freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    }
    sieve();
    LL n = 600851475143, MX = -123;
    factorize(n);
    for (int i = 0; i < factors.size(); ++i) {
        MX = max(MX, factors[i]);
    }
    cout<<MX<<endl;

    return 0;
}
