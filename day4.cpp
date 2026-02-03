#include<iostream>
using namespace std;
int main(){




    // int j, i, n = 5;
    // for (i=1; i<= n-1; i++){
    //     for (j=1; j<=n-1; j++){
    //         cout<< j ;
    //     }
    //     cout<< endl;
    // }
  int i, j;
    int n = 5;
    char c = 'A';  // initialize character

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << c << " ";
            c = c + 1;
        }
        cout << endl;
    }

    return  0;
}