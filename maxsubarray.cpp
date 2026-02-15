#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n=5;
    int a[5]={1,2,3,4,5};
    int ms=0;
    for (int st=0; st<n; st++){
        int cs=0;
        for (int end=st; end<n; end++){
            cs+=a[end];
            ms=max(cs,ms);
        }
    }
    cout<<ms<<endl;
    return 0;
}