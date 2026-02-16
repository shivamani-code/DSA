#include<iostream>
#include <vector>
using namespace std;

// int main(){
//     int target= 10;
//     vector<int> nums ={1,5,5};
//     for(int i=0; i<5; i++){
//         for(int j=i+1; j<5;j++){
//             if(nums[i]+nums[j] == target){
//                 cout << i << ", " << j<< endl;
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }

// /o(n)
int main(){
    double target= 16;
    vector<int> nums ={1,5,7,9,9};
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
           i++;
        }
        else{
           cout << i << ", " << j<< endl;
           break;
        }
        
    }
    return 0;
}
