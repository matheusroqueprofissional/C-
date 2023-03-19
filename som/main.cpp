#include<windows.h>
#include<iostream>
#include "stdio.h"
using std::cout;
using std::endl;

int som();
void menu();
void transformar(char str[]);



int som(){
    

}


void coletar_string(){

}

void menu(){

    cout<<"=============================="<<endl;
    cout<<"escritor de codigo binario c++"<<endl;
    cout<<"inserir mensagem [1]"    	  <<endl;
    cout<<"sair [0]"                      <<endl;
    cout<<"=============================="<<endl;
}

int main(){
    menu();
    int escolha ;
    char str[100];
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 1:
        cout<<"insira o a string que deseja traduzir:"<<endl;
        scanf("%s",str);
        cout<<"a string inserida esta correta?"<<endl;
        cout<<str;
        cout<<"transformando em codigo morse"<<endl;
        transformar(str);
        break;
    case 0:
        cout<<"saindo";
        break;
    default:
        cout<<"favor digite outra opcao";
        break;
    }
}



void transformar(char str[]){
    int contador = 0;
    cout<<"\n\ntransformar iniciado\n\n";

    cout<<""<<str<<endl;
    cout<<endl;


    int tamanho_string = strlen(str);
    cout<<"\n\na string tem "<<tamanho_string<<" caracteres\n\n";
    cout<<"gerando palavra em morse\n\n";
    while (tamanho_string>contador)
    {   
        switch (str[contador])
        {

        case 'a':
            cout<< ".- ";
            break;
        case 'b':
            cout<< "-... ";
            break;
        case 'c':
            cout<< "-.-. ";
            break;
        case 'd':
            cout<< "-.. ";
            break;
        case 'e':
            cout<< ". ";
            break;
        case 'f':
            cout<< "..-. ";
            break;
        case 'g':
            cout<< "--. ";
            break;
        case 'h':
            cout<< ".... ";
            break;
        case 'i':
            cout<< ".. ";
            break;
        case 'j':
            cout<< ".--- ";
            break;
        case 'k':
            cout<< "-.- ";
            break;
        case 'l':
            cout<< ".-.. ";
            break;
        case 'm':
            cout<< "-- ";
            break;
        case 'n':
            cout<< "-. ";
            break;
        case 'o':
            cout<< "--- ";
            break;
        case 'p':
            cout<< ".--. ";
            break;
        case 'q':
            cout<< "--.- ";
            break;
        case 'r':
            cout<< ".-. ";
            break;
        case 's':
            cout<< "... ";
            break;
        case 't':
            cout<< "- ";
            break;
        case 'u':
            cout<< "..- ";
            break;
        case 'v':
            cout<< "...- ";
            break;
        case 'w':
            cout<< ".-- ";
            break;
        case 'x':
            cout<< "-..- ";
            break;
        case 'y':
            cout<< "-.-- ";
            break;
        case 'z':
            cout<< "--.. ";
            break;
        case '0':
            cout<< "----- ";
            break;
        case '1':
            cout<< ".---- ";
            break;
        case '2':
            cout<< "..--- ";
            break;
        case '3':
            cout<< "...-- ";
            break;
        case '4':
            cout<< "....- ";
            break;
        case '5'://5
        cout<< "..... ";
            
            break;
        case '6'://6
        cout<< "-.... ";
          
            break;
        case '7'://7
        //str[contador] +="--...";
            cout << "--... ";
            break;
        case '8'://8
        cout<< "---.. ";
            break;
        case '9'://9
        cout<< "----.";
            break;
        case '.'://.
        cout<< ".-.-.- ";

            break;
        case ','://,
        cout<< "--..-- ";

        }
            contador ++;
    }
    
    contador = 0;
    cout<<"\n\ngerando som\n\n";
    while(tamanho_string>contador){
        switch (str[contador])
        {

        case 'a':
            Beep(500,1000);//.
            Beep(900,1000);//-
            cout<< ".-";
            break;
        case 'b':
            Beep(900,1000);
            Beep(500,1000);
            Beep(500,1000);
            Beep(500,1000);

            cout<< "-...";
            break;
        case 'c':
            Beep(900,1000);
            Beep(500,1000);
            Beep(900,1000);
            Beep(500,1000);
            cout<< "-.-.";
            break;
        case 'd':
            Beep(900,1000);
            Beep(500,1000);
            Beep(500,1000);
            cout<< "-..";
            break;
        case 'e':
            Beep(500,1000);
            cout<< ".";
            break;
        case 'f':
            Beep(500,1000);
            Beep(500,1000);
            Beep(900,1000);
            Beep(500,1000);
            cout<< "..-.";
            break;
        case 'g':
            Beep(900,1000);
            Beep(900,1000);
            Beep(500,1000);
            cout<< "--.";
            break;
        case 'h':
            Beep(500,1000);
            Beep(500,1000);
            Beep(500,1000);
            Beep(500,1000);
            cout<< "....";
            break;
        case 'i':
            Beep(500,1000);
            Beep(500,1000);
            cout<< "..";
            break;
        case 'j':
            Beep(500,1000);
            Beep(900,1000);
            Beep(900,1000);
            Beep(900,1000);
            cout<< ".---";
            break;
        case 'k':
            Beep(900,1000);
            Beep(500,1000);
            Beep(900,1000);
            cout<< "-.-";
            break;
        case 'l':
            Beep(500,1000);
            Beep(900,1000);
            Beep(500,1000);
            Beep(500,1000);
            cout<< ".-..";
            break;
        case 'm':
            Beep(900,1000);
            Beep(900,1000);
            cout<< "--";
            break;
        case 'n':
            Beep(900,1000);
            Beep(500,1000);
            cout<< "-.";
            break;
        case 'o':
            Beep(900,1000);
            Beep(900,1000);
            Beep(900,1000);
            cout<< "---";
            break;
        case 'p':
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
            cout<< ".--.";
            break;
        case 'q':
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(900,1000);
            cout<< "--.-";
            break;
        case 'r':
        Beep(500,1000);
        Beep(900,1000);
        Beep(500,1000);
            cout<< ".-.";
            break;
        case 's':
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
            cout<< "...";
            break;
        case 't':
        Beep(900,1000);
            cout<< "-";
            break;
        case 'u':
            Beep(500,1000);
            Beep(500,1000);
            Beep(900,1000);
            cout<< "..-";
            break;
        case 'v':
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
            cout<< "...-";
            break;
        case 'w':
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< ".--";
            break;
        case 'x':
        Beep(900,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
            cout<< "-..-";
            break;
        case 'y':
        Beep(900,1000);
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< "-.--";
            break;
        case 'z':
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(500,1000);
            cout<< "--..";
            break;
        case '0':
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< "-----";
            break;
        case '1':
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< ".----";
            break;
        case '2':
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< "..---";
            break;
        case '3':
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
            cout<< "...--";
            break;
        case '4':
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
            cout<< "....-";
            break;
        case '5'://5
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        cout<< ".....";
            cout << ".....";
            break;
        case '6'://6
        Beep(900,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(500,1000);
        cout<< "-....";
            cout << "-....";
            break;
        case '7'://7
            Beep(900,1000);
            Beep(900,1000);
            Beep(500,1000);
            Beep(500,1000);
            Beep(500,1000);
            cout << "--...";
            break;
        case '8'://8
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(500,1000);
        cout<< "---..";
            break;
        case '9'://9
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
        cout<< "----.";
            break;
        case '.'://.
        Beep(500,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(900,1000);
        cout<< ".-.-.-";
            break;
        case ','://,
        Beep(900,1000);
        Beep(900,1000);
        Beep(500,1000);
        Beep(500,1000);
        Beep(900,1000);
        Beep(900,1000);
        cout<< "--..--";
            
        }
        contador++;
    }
    cout<<"\n\n"<<str;



}