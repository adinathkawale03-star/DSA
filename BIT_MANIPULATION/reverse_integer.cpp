#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   int rev(int n){
    int sign=1;
    if(n<0){
        sign=-1;
        n=abs(n);
    }
    long long ans=0;
    while(n!=0){
        int a=n%10;
        ans=ans*10+a;
        n=n/10;
        if(ans>INT_MAX) return 0;
    }
    if(sign==-1){
        ans=-1*ans;
        if(ans<INT_MIN) return 0;
    }
    return ans;
   }
};
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    solution sol;
    cout<<"reversed number:"<<sol.rev(n)<<endl;
    return 0;
}