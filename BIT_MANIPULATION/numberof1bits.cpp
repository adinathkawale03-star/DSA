#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   int n1bits(int n){
    int cnt=0;
    while(n>0){
        cnt+=(n&1);
        n=n>>1;
    }
    return cnt;
   }
};
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    solution sol;
    int ans=sol.n1bits(n);
    cout<<"number of 1 bits:"<<ans<<endl;
    return 0;
}