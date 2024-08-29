#include<iostream>
#include<string>
using namespace std;

int main(){

int n;
cin>>n;

int x = 0;
while (n--)
{   
    int s;
    cin>>s;
    if(s == x++ || s == x--){
        x++;
    }
    else{
        x--;
    }
}

cout<<x;


return 0;
}