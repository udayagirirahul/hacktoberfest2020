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
    ll a,b,c,d;
    while(t--)
    {flag=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>a>>b>>c>>d;
            if(b==c){flag=1;}
        }
        if(flag==1)
        {
            if(k%2==0){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
        else{cout<<"NO\n";}
    }
    }