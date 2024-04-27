#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2,i,j;
    vector<int>a,b,c;
    cout<<"Enter number of exponent in polynomial A";
    cin>>n1;
    cout<<"Enter number of exponent in polynomial B";
    cin>>n2;
    for(i=0;i<n1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n2;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    i=0;
    int co=0;
    while(n1>=0){
        if(n1>n2){
           while(n1>n2){
            c.push_back(a[n1-1]);
            n1--;
           }
        }
        else if(n2>n1){
            while(n2>n1){
            c.push_back(b[n2-1]);
            n2--;
           }
        }
        while(n1>0){
            int y=a[n1-1]+b[n1-1]+co;
            co=0;
            if(y>=10){
                co=1;
                y%=10;
            }
            c.push_back(y);
            n1--;
        }
        if(co==1){
            c.push_back(1);
        }
        break;
    }
    for(i=c.size();i>=0;i--){
        cout<<c[i]<<" ";
    }
}
