//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
 #include <bits/stdc++.h> 
 #include <ext/pb_ds/assoc_container.hpp>
 #include <ext/pb_ds/tree_policy.hpp>
 
 #define ll                            long long 
 #define ull                           unsigned long long
 #define ld                            long double
 #define oo                            2000000000
 #define mod                           1000000007
 #define pi                            3.14159265359
 
 #define nl                            "\n"
 #define FI                            first
 #define SE                            second
 #define MP                            make_pair
 #define pb                            push_back
 #define pf                            push_front
 
 #define odd(a)                         a&1
 #define even(a)                       !(a&1)
 #define ON(n,m)                       (n|(1<<m))
 #define OFF(n,m)                      (n&~(1<<m))
 #define ISON(n,m)                     ((n>>m)&1 )
 #define ISOFF(n,m)                    (!((n>>m)&1))
 
 
 #define Num_of_Digits(n)              ((int)log10(n)+1)
 #define power_of_2(n)                 (n && (!(n&(n-1))))
 #define isPerfectSquare(n)            (sqrt(n) == (ll)sqrt(n))
 #define ceil2(n, m)                   (((n) / (m)) + ((n) % (m) ? 1 : 0))
 #define floor2(n, m)                  (((n) / (m)) - ((n) % (m) ? 0 : 1))
 
 #define sz(x)                          int(x.size())
 #define all(a)                         a.begin(),a.end()
 #define rall(a)                        a.rbegin(),a.rend()
 #define rev(a)                         reverse(all(a));
 #define v_find(x,num)                  *find(all(x),num)
 #define mx(a)                          *max_element(all(a))
 #define mn(a)                          *min_element(all(a))
 #define v_sort(x)                      sort(all(x),less<>())
 #define v_gsort(x)                     sort(all(x),greater<>())
 #define set_val(v,x)                   memset(v, x, sizeof(v));
 
 #define fixed(n)                       fixed << setprecision(n)
 #define bool(n)                        cout<<(n?"YES":"NO")<<nl;
 #define r_v_n                          return void(cout<<"NO"<<nl);
 #define r_v_y                          return void(cout<<"YES"<<nl);
 
 #define cin(a)                         for ( auto & i : a) cin >>i;
 #define cout(a)                        for ( auto & i : a) cout << i <<" ";
 #define cin_pair(a)                    for ( auto & i : a) cin>> i.FI >>i.SE;
 #define cout_pair(a)                   for ( auto & i : a) cout << i.FI <<" "<<i.SE<<nl;
 
 #define islower(c)                     c>=97 && c<=122
 #define isupper(c)                     c>=65 && c<=90
 #define upper(s)                       transform(all(s), s.begin(), ::toupper);
 #define lower(s)                       transform(all(s), s.begin(), ::tolower);
 
 
ll gcd(ll a,ll b)                       { return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b)                       { return a/gcd(a,b)* b ;}
ll factorial(ll n)                      { return (n == 0?1:n * factorial(n - 1)); } 
bool n_ispowof_k(int n,int k)           { return (n== pow (k,(int)(log(n) / log(k))));}
ll fib(ll n)                            { return (n==1 || n==2 ?1: fib(n-1)+fib(n-2));}
double n_q(int x1,int y1,int x2,int y2) { return sqrt(  pow((x1-x2),2) + pow ((y1-y2)  ,2) )/2;}
bool is_tri(int a,int b, int c)         { return ((a+b>c) && (a+c>b) && (b+c>a) && (a&&b&&c)) ;}
bool vowel(char c)                      { return (c=='a'||c=='o'||c=='u'||c=='i'||c=='e')||(c=='A'||c=='O'||c=='U'||c=='I'||c=='E');}
ll powmod(ll a,ll b,ll MOD)             { ll ans=1;a%=mod; if(!a )return 0; while(b){if(b%2)ans=ans*a%MOD;a=a*a%MOD;b/=2;}return ans;}
 
 #define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << nl ;
 #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
   //    down ,right, up , left,up_left,dowen_right,up_right,down_left 
//int dx={1,    0,    -1,   0,    -1    ,  1   ,      -1  ,     1    };
//int dy={0,    1,     0,  -1,    -1    ,  1   ,       1  ,    -1    };
 
// from lower to upper char-32
// from upper to lower char+32
// A =65 Z=90  -   a=97  z=122
 

 
 using namespace std;
 using namespace __gnu_pbds;
 
  void menna_allah(){
 ios_base ::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin), freopen ("output.txt", "w", stdout);
  #endif
 
}
 
 void kick(){
 ios_base ::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);
 
  freopen("survive.in", "r", stdin);
//  freopen ("output.txt", "w", stdout);
}
 
 
template<typename T = int> istream& operator>>(istream& in, vector<T>& v){
    for (T& i : v) in >> i;
    return in;
}
 
template<typename T = int> ostream& operator<<(ostream& out, const vector<T>& v){
    for (const T& x : v)
        out << x << ' ';
    return out;
}

 

void solve(){


} 

 1    
 
int main()
{
  menna_allah();
int t=1;
 //        cin >>t;
while ( t--){
 
  solve();
  cout<<nl;
 // Time;
}
 
    return 0;
}
 
