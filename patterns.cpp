#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N value: ";
    cin >> n;

    // star (*) pattern
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // A B C D pattern
    // for(int i=1; i<=n; i++){
    //     char ch = 'A';
    //     for(int j=1; j<=n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // 123 456 789 pattern
    // int num=1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // // star (*) triangle patten
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    
    // // 1 22 333 444 and A BB CCC DDDD EEEE pattern
    // // char ch='A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << i+1 ; // cout << ch ;
    //     }
    //     // ch++;
    //     cout << endl;
    // }

    // // 1 12 123 1234 pattern 
    // for(int i=0; i<n; i++){ // 0 -> 1
    //     for(int j=0; j<i+1; j++){ // 0 -> 0 1
    //         cout << j+1 << " "; // 0 + 1 -> 1 || 0 -> 1 | 1 -> 2
    //     }
    //     cout << endl;
    // }   

    // 1 21 321 4321 54321 pattern
    // for(int i=0; i<n; i++){  // 0 -> 1 -> 2
    //     for(int j=i+1; j>0; j--){ // 1 -> 2, 0 1 | 2 1 -> 3, 0 1 2 | 3 2 1 
    //         cout << j << " "; 
    //     }
    //     cout << endl;
    // }


    // floyd's triangle pattern
    // int num=1;
    // for(int i=0; i<n; i++){ // 0 
    //     for(int j=i+1; j>0; j--){ // 1
    //         cout << num  << " ";  
    //         num++;
    //     }
    //     cout << endl;
    // }

    // char ch='A';
    // for(int i=0; i<n; i++){ // 0 
    //     for(int j=i+1; j>0; j--){ // 1
    //         cout << ch  << " ";  
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // inverted triangle pattern 
    // for(int i=0; i<n; i++){ // 0 -> 1
    //        // spaces 
    //     for(int j=0; j<i; j++){ // 0 -> 1, 0
    //         cout << " ";
    //     }
    //        // nums
    //     for(int j=0; j<n-i; j++){ // 4 - 0 -> 4 --> 4 - 1 -> 3 
    //         cout << i+1; // 0 + 1 -> 1 --> 1 + 1 -> 2
    //     }
    //     cout << endl;
    // }

    // char ch='A';
    // for(int i=0; i<n; i++){ 
    //     // spaces 
    //     for(int j=0; j<i; j++){ 
    //         cout << " ";
    //     }
    //     // nums
    //     for(int j=0; j<n-i; j++){ 
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // pyramid pattern
    // for(int i=0; i<n; i++){ // 0 --> 1 
    //     // spaces
    //     for(int j=0; j<n-i-1; j++){ // 0, 4 - 0 - 1 = 3 --> 1, 4 - 1 -1 = 2
    //         cout << " ";
    //     }

    //     // nums left side
    //     for (int j=0; j<=i; j++){ 
    //         cout << j+1; 
            
    //     }

    //     // nums right side
    //     for (int j=i; j>0; j--){ 
    //         cout << j; 
    //     }
    //     cout << endl;
    // }

    // howllow diamond pattern
    // top
    for(int i=0; i<n; i++){ // 0 --> 1 
        // left spaces
        for(int j=0; j<n-i-1; j++){ // 0, 4 - 0 - 1 = 3 --> 1, 4 - 1 -1 = 2
            cout << " ";
        }

        cout << "*"; 

        if(i!=0){
            // middle spaces
            for (int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*"; 
        }
        cout << endl;
    }

    // bottom
    for (int i=0; i<n-1; i++){
        // spaces
        for(int j=0; j<i+1; j++){ // 0, 4 - 0 - 1 = 3 --> 1, 4 - 1 -1 = 2
            cout << " ";
        }

        cout << "*"; 
        if(i != n-2){
            for(int j=0; j<2*(n-i)-5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}