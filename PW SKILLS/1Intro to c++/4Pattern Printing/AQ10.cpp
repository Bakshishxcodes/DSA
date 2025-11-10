/*Print the following pattern
Input : n = 5
Output :
     *     
    ***    
   * * *   
  *  *  *  
 *   *   * 
***********
 *   *   * 
  *  *  *  
   * * *   
    ***    
     *     
     */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    int ist=n,fst=n;
    for(int i=1;i<=n;i++){
        cout << " ";
        for(int j=1;j<=2*n-1;j++){
            if(j==ist || j==n || j==fst) cout << "*";
            else cout << " ";
        }
        cout << endl;
        ist--;
        fst++;
    }
    ist++;
    fst--;
    for(int i=0;i<2*n+1;i++) cout << "*";
    cout << endl;
    for(int i=1;i<=n;i++){
        cout << " ";
        for(int j=1;j<=2*n-1;j++){
            if(j==ist || j==n || j==fst) cout << "*";
            else cout << " ";
        }
        cout << endl;
        ist++;
        fst--;
    }
    return 0;
}