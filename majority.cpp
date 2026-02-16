#include<iostream>
#include <vector>
using namespace std;

int main(){
    int target= 10;
    vector<int> nums ={1,5,5};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5;j++){
            if(nums[i]+nums[j] == target){
                cout << i << ", " << j;
                return 0;
            }
        }
    }
    return 0;
}
