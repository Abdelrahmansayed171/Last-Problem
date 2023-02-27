//<a href="https://codeforces.com/contest/1793/problem/A"></a>

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define Orca               cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
//#define filein             freopen("balancing.in","r",stdin);
//#define fileout            freopen("balancing.out","w",stdout);
#define endl               '\n'
#define PB                 push_back
//#define MP                 make_pair
#define INF                1000000
//#define loop(n)            for(int i = 0;i < n;i++)
//#define space              " "
//#define x                  first
//#define y                  second
//#define vi                 vector <int> v
typedef long long          ll;
//typedef pair<int,int>      pr;


// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


void Orcawy(){
    ll a,b,n,m;
    cin >> a >> b >> n >> m;
    ll fd = n/(m+1);
    ll ans = 0;
    if(fd*m*a <= ((fd*m)+fd)*b){
        ans += fd*m*a;
    }
    else{
        ans+= ((fd*m)+fd)*b;
    }
    n-= ((fd*m)+fd);
    if(n*a <= n*b){
        ans += n*a;
    }
    else{
        ans+= n*b;
    }
    cout << ans <<endl;
}

int main() {
    Orca
    int t;
    cin >> t;
    while(t--){
        Orcawy();
    }
    return 0;
}
