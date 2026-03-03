#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a and b\n";
    cin>>a;
    cin>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"Result(a/x)="<<a/x<<"\n";

        }
        else    //There ia an Exception
        {
            throw(x);  //throw int object
        }
    }
    catch(int i)//Cateches the Exception
    {
        cout<<"Exception caught: x="<<x<<"\n";

    }
    cout<<"END";
    return 0;
}