 #include<bits/stdc++.h>
    using namespace std;
    #define ll long long  
    #define pb push_back
    ll gcd(ll a, ll b){
    if(b == 0)
        {return a;}
    return gcd(b, a % b);}
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t,n,i,j,cnt=0,flag=0,l,r,m,min1,min2,ma,k,k2,z;
    cin>>t;
    vector<ll> a,b,c;
    while(t--)
    {
        cin>>n>>r;
        if(n==1 || n==2){cout<<"1\n";}
        else{
        n=n-2;
        if(n%r==0){n=n/r;n++;}
        else{n=(n/r)+2;}
        cout<<n<<"\n";
        }
    }
    }
        