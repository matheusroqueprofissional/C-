#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main(){

    int hr = 0, min=0, seg = 0;

    while (seg>=0,seg<60)
    {
       seg ++;
       Sleep(1000);
       system("cls");
       cout<<hr<<":H "<<min<<":M "<<seg<<":S"<<"\n";
       if(seg==60)
       {
       min++;
       seg = 0;
       }
       if(min == 60)
       {
        hr++;
        min =0;
       }

    }
    
    
    
    return 0;
}

