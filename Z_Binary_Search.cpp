
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
#define yes cout << "YES" << nl;
#define no  cout << "NO" << nl;
using namespace std;

int main()
{
    Naba;
    int n,q;
    cin >> n >> q;

    vector<int>v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    while(q--)    
    {
        int item; 
        cin >> item;
        
        int lp = 0, rp = n-1;
        bool flag = 0;

        while( lp <= rp)          //O(logn)
            
        {
            int mid = (lp + rp)/2;

            if(v[mid] == item )  
            {
                flag = 1;
                break;
            }   

            else if(item < v[mid])   rp = mid - 1;

            else   lp = mid + 1;
        }

        flag ? cout << "found" << nl: cout << "not found" << nl;;
    }

    return 0;
}
