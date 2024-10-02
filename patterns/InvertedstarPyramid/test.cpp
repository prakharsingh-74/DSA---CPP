#include<iostream>
using namespace std;
void print7(int n){

    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

//reduced time taken
//void nStarTriangle(int n) {
//    for (int i = 0; i < n; i++) {
//        string line(n - i - 1, ' '); 
//        line += string(2 * i + 1, '*');
//        
//        cout << line << endl;
//}