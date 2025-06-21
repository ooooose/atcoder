#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<bool> color(N,false);

    int seg=0;
    while(Q--)
    {
        int pos;cin>>pos;
        pos--;
        if(!color[pos])
        {
            color[pos]=true;
            bool lb=(pos-1>=0&&color[pos-1]);
            bool rb=(pos+1<N&&color[pos+1]);
            if(!lb&&!rb)seg++;
            else if(lb&&rb)seg--;
        }
        else
        {
            color[pos]=false;
            bool lb=(pos-1>=0&&color[pos-1]);
            bool rb=(pos+1<N&&color[pos+1]);
            if(!lb&&!rb)seg--;
            else if(lb&&rb)seg++;
        }
        cout<<seg<<"\n";
    }
    return 0;
}

