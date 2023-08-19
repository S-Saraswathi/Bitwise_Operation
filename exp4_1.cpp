//PRN: 22070123102
//Exp-4

//Program-1
#include<iostream>
using namespace std;

int main() {
    int num1, num2, v1, v2;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;

    v1=num1&num2;
    cout<<"Binary AND operation: "<<v1<<endl;
    v2=num1|num2;
    cout<<"Binary OR operation: "<<v2<<endl;

    return 0;

/*OUTPUT
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp4_1.cpp -o exp4_1 } ; if ($?) { .\exp4_1 }
Enter number-1: 5
Enter number-2: 3
Binary AND operation: 1
Binary OR operation: 7*/
}