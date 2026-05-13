// RECURSION

// // using for loop
// #include<iostream>
// using namespace std;

// int main(){
//     int i, n = 10;

    
//     for(i = 1; i <= n; i++) {
//         cout << i << endl;
//     }

//     return 0;
// }

// //using RECURSION
#include<iostream>
using namespace std;

void printNum(int i,int n=10){
    if (i > n) {
        return;
    }
    cout <<i << endl;
    printNum(i + 1, n);
}
int main() {
    int n = 10;
    printNum(1, n);

    return 0;
}

