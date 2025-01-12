#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        multiset<int> bags;
        for (int i=0;i<n;i++){
            int candy;
            cin>>candy;
            bags.insert(candy);
        }
        int total_candies=0;
        for (int i=0;i<k;i++){
            auto it = (--bags.end());
            int candy = *it;
            total_candies+=candy;
            bags.erase(it);
            bags.insert(candy/2);
        }
        cout<<total_candies<<endl;
    }
}