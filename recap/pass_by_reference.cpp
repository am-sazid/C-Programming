#include<bits/stdc++.h>
using namespace std;

void change_a(int &b){
    b = 30;
}

int main() 
{
    int a = 20;

    change_a(a);
    cout << "Main" << a<<endl;

    return 0;
}