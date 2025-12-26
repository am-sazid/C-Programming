#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a = 100;

    int* ptr = &a;
    int** pptr = &ptr;

    cout<< &ptr<<endl;
    cout<< pptr<<endl;
    cout<< &a<<endl;
    cout<< *pptr<<endl;
    cout<< **pptr<<endl;

    // cout<< ptr<<endl;
    return 0;
}