//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
 #include <bits/stdc++.h> 
 
 // to determind its a prime or not 

bool prime(ll n){// o(log(n))
  if (n==2 ) return true;
  if (n<2 || !(n&1)) return false ;
  
  for ( int i=3;i*i<=(n);i+=2){
    if ( n%i ==0) return false;
  }
  return true ;
 
}
//==================================================

bool isPerfectSquare(ll x)
{
  return  ((sqrt(n) == (int)sqrt(n))?true:false); 
   
}
//==================================================

bool isPowerOfTwo(ll x)
{
   return (x && (!(x&(x-1))));
}
 
//==================================================
// fibonatci
ll fib(ll n) { // o(2^n)
    if (n == 1 || n==2) return 1;
    return fib(n - 1) + fib(n - 2);
}

ll fib(ll n) { // o(2^n)
    return  (n == 1 || n==2 ?1: fib(n - 1) + fib(n - 2)) ;
   
}
//======================================================\\
  double slope(double x1, double y1, double x2, double y2){
        if(x2 - x1 == 0) return INT_MAX; // divisble by zero 
        return (y2 - y1) / (x2 - x1);
    }

//======================================================\\    
//  Fibonacci from 1 to n
t1=0;   t2=1;
for (int i = 1; i <= n; ++i) {
 
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
 
        cout << nextTerm << " ";
    }

//---------------------------------------------------------\\

 // factorial
ll factorial(ll n) {
  return (n==0?1:n*factorial(n-1));
}


//---------------------------------------------------------\\
 // sum of diagonal in 2D matrix
    int diagonalSum(vector<vector<int>>& mat) {
        long long sum=0;
        for (int i=0;i<mat.size();i++) {
          sum +=mat[i][i] + mat[i][mat.size()-i-1];
        }
         return ( mat.size()&1?sum-mat[mat.size()/2][mat.size()/2]:sum); 
    }
//===========================================


// summation of n
ll sum(ll  n){
  return n*(n+1) /2;

}
//===============================
ll count_arismatic(ll a1,ll an,ll n){ //o(n)
  return ((a1+an)*n)/2;
}

//-------------------------------------------------
ll count_arismatic(ll a1,ll n,ll d){
  return (((2*a1+(n-1)*d)*n)/2;
}
//=======================================

// sum digets in string 
ll sum(string s){
  ll sum=0;
  for ( int i=0;i<s.size();i++){
    sum+=s[i]-'0';
  }
  return sum;
}
//---------------------------------------------------------\\
  // GCD(1, num) = 1
 // LCM(1, num) = num

 
// GCD funcation 
 int gcd(int a,int b)
{
    if (a < b) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

//________________________________________
// LCD 
ll LCD (int n,int m){ 

 return n/gcd(n,m) *m;
}
//---------------------------------------------------------\\
 // fact of max of n,m
ll fact[20];
void build_fact(){
  fact[0]=1;
  for ( int i=1;i<=19;i++){
    fact[i]=fact[i-1] * i;
  }
}



// ncr and npr 
ll nCr(ll n,ll r){
  if (r > n) return 0;
return fact[n]/fact[n-r]/fact[r];
}

// or

ll ncr(int n,int r){
 if ( n<r) return 0;
 if ( n==r || r==0) return 1;
 return ncr(n-1,r-1) + ncr ( n-1,r );
}

//---------------------------------------------------------\\

  // Permutation
ll nPr(ll n,ll r){
  if (r > n) return 0;
 return fact[n] / fact[n-r];
}

//or
 

    ll nPr(ll n, ll r){
        if(r > n) return 0;
        ll npr = 1;
        while(r-- > 0)
            npr *= n--;
        return npr;
    }


//---------------------------------------------------------\\
//مثال ((n/2 +n/3 +n/5)- (n/6 +n/10 +n/15)+(n/30))
// لحساب عدد الارقام من 1 الى  التى تقبل الاقسمه على كذا رقم
ll div_or(ll n,int d1,int d2,int d3){
  return ((n/d1 +n/d2 +n/d3)- (n/(d1*d2) +n/(d1*d3) +n/(d2*d3))+(n/d1*d2*d3))
}

//---------------------------------------------------------\\
