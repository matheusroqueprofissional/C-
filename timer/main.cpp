#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main(){

    int hr = 24, min=0, seg = 0;

    while (hr >0 || min>0 || seg>0)
    {
      cout<<"\n"<<hr<<"H "<<min<<"M "<<seg<<"S ";
      Sleep(1000);
      seg--;
      if(seg<0)
      {
        min--;
        seg =59;
      }
      if(min <0)
      {
        hr--;
        min = 59;
      }
       
       
        
    }
    
    cout<<"\n"<<hr<<"H "<<min<<"M "<<seg<<"S \ntimer finalizado";
    
    
    
    return 0;
}

