
#include "assign2.cpp"
#include<iostream>
using namespace std;
int main()
{
    ExtendedArray obj(5);
    obj.append(20);
    obj.append(30);
    obj.append(10);
    obj.append(50);

    cout<<endl<<"Greatest Element is: "<<obj.greatest();

    cout<<endl;
    return 0;
}