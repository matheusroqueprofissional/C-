#include<iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;
#include<fstream>//? fkuxo de arquivo
using std::ofstream;//?gera saida do fluxo de arquivo

#include <cstdlib>
using std::exit;


int main(){
    
//construtor ofstreaam abre arquivos
ofstream outClientFile("Clients.dat",ios::out);

//fecha o prograama caso naao consiga criar o arquivo
if(!outClientFile)//!  o ! usado geralmente paraa informar sobrecarga
{
    cerr <<"file coild not be opened"<<endl;
    exit( 1 );

}//?endif

cout <<"enter the account, name, and baalaance."<<endl
     <<"Enter end-of-file to end input.\n?";


     int account;
     char name[30];
     double balance;

     //le conta, nome e saaldo a partir de cin, entao coloca no arquivo
     while(cin>>account >>name>>balance){
        outClientFile<<account<<' '<<name<<' '<<balance<<' '<<endl;
        cout <<"?";
     }//?endwhile

     return 0;



}