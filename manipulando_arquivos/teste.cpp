#include<iostream>
using std::cin;
using std::cerr;
using std::cout;
using std::endl;
using std::ios;


//?codigo usado para abrir o aarquivo
#include<fstream> //TODO ESSE CODIGO Ë PARA INCLUIR OS CODIGOS NECESSAARIOS PARA MANIPULAR ARQUIVOS
using std::ofstream; //todo CODIGO USADO PARA GERAR A SAIDA DO FLUXO DE ARQUIVO

#include<cstdlib>
using std::exit;



int main(){
//todo abre o arquivo
ofstream OutClientFile("Clients.dat",ios::out);
cout <<"enter the account, name, and baalaance."<<endl
     <<"Enter end-of-file to end input.\n?";
int numero = 10;
if(!OutClientFile)//!  o ! usado geralmente paraa informar sobrecarga
{
    cerr <<"file coild not be opened"<<endl;
    exit( 1 );

}//?endif
     //le conta, nome e saaldo a partir de cin, entao coloca no arquivo
     while(cin>>numero){
        OutClientFile<<numero<<' '<<endl;
        cout <<"?";
     }//?endwhile


}