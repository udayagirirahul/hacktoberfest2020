 #include<bits/stdc++.h>
    using namespace std;
    #define ll long long  
    #define pb push_back
    #define f first
    #define s second
    ll gcd(ll a, ll b){
    if(b == 0)
        {return a;}
    return gcd(b, a % b);}
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t,n,i,j,cnt=0,flag=0,l,r,m,min1,min2,ma,k,k2,z;
    cin>>t;
    map<ll,ll> a;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>i;a[i]++;
        }
        cnt=0;
        for(auto it=a.begin();it!=a.end();it++)
        {
            cnt+=(it->s)/(it->f);
            k=(it->s)/(it->f);
            it->s=it->s -k*(it->f) ;
        }
        map<ll,ll>::iterator it1;
        map<ll,ll>::iterator it2;
        it1=a.begin();it1++;
        it2=a.begin();
       for(auto it=it1;it!=a.end();it++)
        {        //cout<<cnt<<"\n";

            it->s = it->s + it2->s;
            cnt+=(it->s)/(it->f);
k=(it->s)/(it->f);
            it->s=it->s -k*(it->f) ;
            it2++;
        }
        cout<<cnt<<"\n";
        a.clear();
    }
    }

        
     
