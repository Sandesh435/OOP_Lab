// Task 5
//WAP in CPP to illustrate the concept of default arguments.

#include<iostream>
using namespace std;
void sum(int a, int b=5, int c= 3){
    cout<<a+b+c<<endl;
}
int main() {
    sum(20);
    sum(1, 3, 5);
}
