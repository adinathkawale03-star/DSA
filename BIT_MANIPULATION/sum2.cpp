#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int sum2(int a,int b){
        while(b!=0){
            int c=(a&b)<<1;
            a=a^b;
            b=c;
        }
        return a;
    }
};
int main(){
    int a,b;
    cout<<"enter the two number:";
    cin>>a>>b;
    solution sol;
    cout<<"sum of the two number:"<<sol.sum2(a,b)<<endl;
    return 0;
}