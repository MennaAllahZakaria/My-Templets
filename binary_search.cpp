//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
 #include <bits/stdc++.h> 

// binary surch


bool bs(vector<ll> &v,ll target){
  int l=0 ,  r=sz(v)-1;
  while (l<=r){
    int mid = l+(r-l)/2;
    if ( v[mid]>target) r =mid -1;
    else if ( v[mid]<target) l=mid +1;
    else return true;
  }
  return false;
}
//-----------------------------------------
int bs(int l,int r,int target){
  if ( l>r) return -1;
  
    int mid= l+(r-l)/2;
    if ( v[mid]==target) return mid+1;
 return (v[mid]<target? bs(mid+1,r,target):bs( l,mid-1,target));
  
}

//---------------------------------------------

int bs(vector<int>&v,int x){
  int l=0,r=sz(v)-1;
  while ( l<=r){
    int mid= l+(r-l)/2;
    if ( v[mid]==x) return mid;

     if ( v[mid]<x) l=mid+1;
    else r=mid-1;
  }
  return -1;
}


===============================================
ll lower_bound(vector<ll> &v,ll target){
  ll l=-1 ,  r=sz(v);
  while (l<r-1){
    ll mid = l+(r-l)/2;
    if ( v[mid]<target) l =mid ;
   
    else r=mid;
  }
  return l+1;
}
//----------------------------------------------------
// upper bound 

int upper_bound(vector<int> v,int target){
  int l=-1 ,  r=sz(v);
  while (l<r-1){
    int mid = l+(r-l)/2;
    if ( v[mid]>=target) r=mid ;
   
    else l=mid;
  }
  return r+1;
}


=====================================================


ll upper_bound(vector<ll> &v,ll target){
  ll l=-1 ,  r=sz(v);
  while (l<r-1){
    ll mid = l+(r-l)/2;
    if ( v[mid]>target) r=mid ;
   
    else l=mid;
  }
  return r;
}

//--------------------------------------------------------\\

    int mySqrt(int x) {
        if ( x==0 || x==1) return x;
        int l=1,r=x;
       
        while ( l<r-1){
              long long mid = l+(r-l)/2;
            if (mid*mid<=x ) l=mid;
            else r=mid;
            
        }
        return l;
        
    }
