#include <iostream>
using namespace std;
int main()
{
    const int c=20;
    int i, A[20],B[20];
    for(i=0;i<c;i++){
        cout << "A[" <<i<< "] = ";
        cin >> A[i];
        if(A[i]%2==0){
            A[i] = A[i]*A[i]*A[i];
        }
        else{
            A[i] = A[i]/2;
        }
    }
    for(i=0;i<c;i++){
        B[i] = A[i];
        cout << "\t" << B[i];
    }
}
