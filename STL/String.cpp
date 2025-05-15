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
    cout << s.substr(0, 3) << nl;   // start from 0 th index,end 3th index
    cout << s.substr(2) << nl;   // start from 2 th index

    s.clear();

    int num = 280;
    string s = to_string(num) ;  // 280

    string sd = "280";
    int n= stoi(sd);   // 280
  

    return 0;
}
