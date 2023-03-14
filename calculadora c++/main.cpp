#include <iostream>
using std::cin;
int main() {
    int repetidor = 1;
    while (repetidor == 1)
    {
       
    
    system("cls");
    int calculo;
    std::cout<<"calculadora";
    std::cout<<"\ninsira o primeiro numero:";
    int n01;
    std::cin>>n01;
    std::cout<<"\ninsira o segundo numero:";
    int n02;
    std::cin>>n02;
    int escolha=1;
    std::cout<<"\nVoce deseja\n \
    somar           [ 1 ]\n \
    subtrair        [ 2 ]\n \
    multiplicar     [ 3 ]\n \
    dividir         [ 4 ]\n";
    std::cin>>escolha;
    switch (escolha)
    {
    case 1:
        calculo =n01+n02;
       std::cout<<"o resultado e: "<<calculo;

        break;
    case 2:
        calculo = n01-n02;
       std::cout<<"o resultado e: "<<calculo;

        break;
    case 3:
        calculo = n01*n02;
       std::cout<<"o resultado e: "<<calculo;

        break;
    case 4:
        calculo = n01/n02;
       std::cout<<"o resultado e: "<<calculo;
               break;
    default:
        break;
    }
    std::cout<<"\n\ndeseja realizar outra conta? sim[1] nao[2]";
    std::cin>>repetidor;
    }
}
