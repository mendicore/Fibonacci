#include <iostream>

using namespace std;

int main(){
    int N, result;
    cout <<"-----FIBONACCI-----"<< endl;
    cout <<"Input Value to N: ";
    cin >> N;

    if(N > 0){
        int N1 = 1;
        int N2 = 0;
        cout << "Result: ";
         cout << N2 << " " << N1 << " ";
            for(int i=2; i < N; i++){
                result = N1 + N2;
                    N2 = N1;
                    N1 = result;
                        cout << result << " ";
            }
    }else if(N < 0){
        int N1 = 1;
        int N2 = 0;
        cout << "Result: ";
         cout << N2 << " " << N1 << " ";
            for(int i=-2; i >= N; i--){
                result = N2 - N1;
                    N2 = N1;
                    N1 = result;
                        cout << result << " ";
            }
    }else{
        cout << "0";
    }
     return 0;
}
