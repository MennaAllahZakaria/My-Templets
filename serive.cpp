//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
 #include <bits/stdc++.h> 

// prime numbers between 1 to n
 vector<bool> primes_seive(ll n){
vector <bool >v(n,true);
v[0]=v[1]=false;
for ( int i=0;i*i<=n;i++){
     if ( v[i])
          for ( int j=i*i;j<=n;j+=i) v[j]=false;
}
return v;
 }

 //-----------------------------------------------------\\

vector<ll> prime_factors(ll n){
        vector <ll> v;
      while (even(n)) {
        v.push_back(2);
        n/=2;
      }  
    for ( int i=3;i<=sqrt(n);i+=2){
      while ( n%i==0) {
        v.push_back(i);
        n/=i;
       
      }
    }    
    if ( n>2) {
      v.push_back(n);
    }

        return v;
    }
//------------------------------------------------------\\

  // to get mod for larg numbers

ll BIG_MOD(string s,ll m){
ll res=0;
for ( auto i:s){
  res=res*10 + int(i-'0');
  res%=m;
}
return res;

}

//---------------------------------------------

// to get power in small time
ll fpow(ll base ,ll pow){ // o(log(n))
if ( pow ==0) return 1;
ll p=fpow(base,pow>>1);
return odd(pow)?p*p*base:p*p;
 
}
//------------------------------------------------------\\

ll big_exp(ll n,ll m,ll mod){
ll ans=1;
while(m){
  if ( odd(m)){
    ans*=m;
    ans%=mod;
  }

  n*=n;
  n%=mod;
  m/=2;
}

return ans;
}
//------------------------------------------------------\\

// get the number of divisors for n

    int number_of_divisors(ll n){ // o(log(n))
        int divisors = 0,i=1;
        for( i = 1; i*i < (n); i++)
            if(n % i == 0) divisors += 2;
        return divisors + (i*i == (n));
    }


    //===========================================
    // get divisors of n
    vector<int> divisors(ll n){
    
      vector <int>v;
      int i=1;
        for( i = 1; i*i < n; i++)
            if(n % i == 0) v.push_back(i),v.push_back(n/i);
            if (i*i==n) v.push_back(i);
        return v;
    }

 //------------------------------------------------------\\
 
