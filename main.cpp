//<a https://codeforces.com/contest/148/problem/A "></a>
///وَأَنْ لَيْسَ لِلْإِنْسَانِ إِلَّا مَا سَعَى
///وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
///And that man shall have nothing but what he strives for
///And that his striving shall soon be seen

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
typedef long long ll;
//typedef pair<int,int>      pr;


// Function to return gcd of a and b
//int gcd(int a, int b) {
//    if (a == 0)
//        return b;
//    return gcd(b % a, a);
//}


void Orcawy() {
//    int n,m;
//    cin >> n >>m;
//    int x,timer = 1, last = n-1;
//    int arr[n];
//    for(int i =0;i <n;i++){
//        arr[i] = -1;
//    }
//    set <int> s;
//    for(int i =0;i <m;i++){
//        cin >> x;
//        int sizee = s.size();
//        s.insert(x);
//        if(sizee != s.size()){
//            arr[last] = timer;
//            last--;
//        }
//        timer++;
//    }
//    for(int i =0; i <n;i++){
//        cout << arr[i] << " ";
//    }
//    cout <<endl;
}

int main() {
    Orca
//    int t;
//    cin >> t;
//    while (t--) {
//        Orcawy();
//    }
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >>d;
    int ans = 0;
    for(int i =1;i <= d;i++){
        if( i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
            ans++;
        }
    }
    cout << ans <<endl;
    return 0;
}
