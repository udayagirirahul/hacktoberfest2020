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
     cnt=0;
     l=0;
     cin>>n;
     i=sqrt(n);
     min1=n-i;
     k=min1;
     min1=i-1+(min1/i);
     if(k%i!=0){min1++;}
     i++;
     min2=n-i;
     k=min2;
     min2=i-1+(min2/i);
     if(k%i!=0){min2++;}
     if(n==1){cout<<"0\n";}
     else{cout<<min(min1,min2)<<"\n";}
    }
    }