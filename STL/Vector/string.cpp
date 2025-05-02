#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
using namespace std;

int main()
{
    Naba;
    
    string s;  cin >> s;
    cout << s << nl;

    s.push_back('a');
    s.pop_back();
  
    cout << s.front() << " " << s.back() << nl;
    cout << s.empty() << nl;
    cout << s.substr(1, 3) << nl;
    cout << s.substr(2) << nl;

    s.clear();
 
  

    return 0;
}
