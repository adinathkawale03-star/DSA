#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    uint32_t re(int n){
        uint32_t ans=0;
        for(int i=31;i>=0;i--){
            uint32_t a=n & (1U<<(31-i));
            if(a) ans=ans|(1U<<i);
        }
        return ans;
    }
};
int main(){
    uint32_t n;
    cout<<"enter the number:";
    cin>>n;
    solution sol;
    uint32_t ans=sol.re(n);
    cout<<"number after reversal:"<<ans;
    return 0;
}