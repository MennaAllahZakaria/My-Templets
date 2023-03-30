//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
 #include <bits/stdc++.h> 
 
 void subArray(vector<int> &v, int n)
{

    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << v[k] << " ";
  
            cout << endl;
        }
    }
}

int n;
vector<vector<int>>ans;
vector<int>v, temp;

void sup(int i){
if ( i>=n) return void ( ans.pb(temp));

temp.pb(v[i]);
rec(i+1);
temp.pop_back();
rec(i+1);

}
//--------------------------------------------------------------\\
    // to count the subarrays
    int count_subarray(int arr[],int n){
   int count=n;
int i=0;
int j=0;

while ( true){
  if ( j == n-1)  break;

  
  count ++;
  i++;
 
  if ( i== n-1){
    j++;
    i=j;
  }
  
} return count;
}
//--------------------------------------------------------------\\
// Print All Subsequences in vector
void PrintAllSubsequences(vector<ll> &v)
{
    //total number of possible non-empty sub-sequences
    int N=sz(v);
    unsigned int set_size = pow(2, N) - 1 ;
    for (int i = 1; i < set_size; i++)
    {
        //printing subsequence
        
        for (int j = 0; j <= N; j++)
        {
            if(i & (1<<j))
            {
                cout<<v[j]<<" ";
            }
        }
       cout<< nl;
    }
}

//--------------------------------------------------------------\\
//Print All s Supsqquences is string
   void Subsequence(string s, string x)
{
    if (s.empty()) {
        cout<<x;
        return;
    }
    Subsequence(s.substr(1), x + s[0]);  
    Subsequence(s.substr(1), x);
}
