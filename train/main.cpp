/**LB**/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define fo(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define fd(i, a, b) for (int i = (a); i >= (b); --i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxn 502
#define maxm 1000006
#define maxc 1000000007
#define pii pair <int,int>
#define Task ""
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
template <typename T> inline void read(T &x){char c;bool nega=0;while((!isdigit(c=getchar()))&&(c!='-'));if(c=='-'){nega=1;c=getchar();}x=c-48;while(isdigit(c=getchar())) x=x*10+c-48;if(nega) x=-x;}
template <typename T> inline void writep(T x){if(x>9) writep(x/10);putchar(x%10+48);}
template <typename T> inline void write(T x){if(x<0){putchar('-');x=-x;}writep(x);putchar(' ');}
template <typename T> inline void writeln(T x){write(x);putchar('\n');}
using namespace std;
int a[maxn], sz;
void dequy(int x, int cur) {
    if (x == 0) {
        FOR(i, 1, sz) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = cur; i <= x; ++i) {
        a[++sz] = i;
        dequy(x - i, i);
        --sz;
    }
}
int main() {
    //srand(time(NULL));
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
    if(fopen(".inp", "r")) freopen(".inp", "r", stdin);
    int n;
    cin >> n;
    dequy(n, 1);
	return 0;

}
