#include <bits/stdc++.h>
using namespace std;
void printBinaryNumberTrianglePattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(i % 2 != 0){
                if(j % 2 != 0)
                    cout << "0";
                else 
                    cout << "1";
            } else {
                if(j % 2 != 0)
                    cout << "1";
                else 
                    cout << "0";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter no of times want to print : ";
    cin >> n;
    printBinaryNumberTrianglePattern(n);
    return 0;

}