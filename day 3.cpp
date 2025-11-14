#include<iostream>
using namespace std;


int main() {

  // char ch ;
  // cout << "enter  a char :";
  // cin >> ch ;
  // if ( ch >= 65  && ch <= 90 ){
  //     cout << "upper case\n";
  //  } else
  //     cout << "lower case\n";


  // int n = 2;
  // cout << ( n>=2 && n<=100 ? "y" : "n") << endl;




//  int n = 0x221E;
 
  
//   // while (count <= n){
//   //   cout << count << " " ;
//   //   count++;
//   // };
// for ( int i=1; i<=n ; i++){
//   cout << i << " ";
// }




// sum of number form 1 to n
  int n;
  int count = 0;
  cout << "enter a nuber";
  cin >> n ;

  for(int i=1; i<=n; i++ ){
    if( i % 2 != 0) count += i;
  }
 
cout << count;

 return 0;
}
