#include <bits/stdc++.h>
using namespace std;

void rectangularPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cout << "*" ;
        }
        cout << endl;
    }
}

void  rightAngledTrianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
           cout << "*" ;
        }
        cout << endl;
    }
}

void rightAngledNumberPyramid1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
           cout << j ;
        }
        cout << endl;
    }
}

void rightAngledNumberPyramid2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
           cout << i ;
        }
        cout << endl;
    }
}

void invertedRightPyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
           cout << "*" ;
        }
        cout << endl;
    }
}

void invertedNumberedRightPyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
           cout << j ;
        }
        cout << endl;
    }
}

void starPyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int spaces = 0; spaces < n - i; spaces++){
            cout << " ";
        }
        for(int j = 0; j < (2 * i - 1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

void invertedStarPyramid(int n){
    for(int i = 0; i < n; i++){
        for(int spaces = 1; spaces < n; spaces++){
            cout << " ";
        }
        for(int spaces = n; spaces > n - i; spaces--){
            cout << " ";
        }
        for(int j = 1; j <= (2*(n-i)-1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

void printDiamondStarPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int spaces = 1; spaces <= n-i; spaces++){
            cout << " ";
        }
        for(int j = 0; j < (2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int spaces = n; spaces > n - i; spaces--){
            cout << " ";
        }
        for(int j = 1; j <= (2*(n-i)-1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pintHalfDiamondStarPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    n--;
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0 ; j--){
            cout << "*";
        }
        cout << endl;
    }
}

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

    cout << "Rectangular Pattern : " << endl;
    rectangularPattern(n);
    cout << endl << "Right Angled Triangle Pattern : " << endl; 
    rightAngledTrianglePattern(n);
    cout << endl << "Right Angled Numbered Pyramid - 1: " << endl; 
    rightAngledNumberPyramid1(n);
    cout << endl << "Right Angled Numbered Pyramid - 2: " << endl; 
    rightAngledNumberPyramid2(n);
    cout << endl << "Inverted Right Pyramid : " << endl; 
    invertedRightPyramid(n);
    cout << endl << "Inverted Numbered Right Pyramid : " << endl; 
    invertedNumberedRightPyramid(n);
    cout << endl << "Star Pyramid : " << endl; 
    starPyramid(n);
    cout << endl << "Inverted Star Pyramid : " << endl; 
    invertedStarPyramid(n);
    cout << endl << "Diamond Star Pattern : " << endl; 
    printDiamondStarPattern(n);
    cout << endl << "Half Diamond Star Pattern : " << endl;
    pintHalfDiamondStarPattern(n);
    cout << endl << "Binary Number Triangle Pattern : " << endl; 
    printBinaryNumberTrianglePattern(n);
    return 0;

}
