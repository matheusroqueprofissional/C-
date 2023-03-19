#include<windows.h>
#include<iostream>
using std::cout;

//TODO aqui usamos uma funçao callback onde ira
//TODO meio que utilizar uma funcao definida pelo windows e pelo DEV(EU)
LRESULT CALLBACK WindowProcedure(HWND,UINT,WPARAM,LPARAM);
char szClassName[] = "WindowsApp";
char szTitle[] = "Hello, World!";
//TODO usamos Win main pra falar que ir  ser umaa janelaa que esse codigo executara
int WINAPI WinMain(
    HINSTANCE hThisInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpszArgument,
    int nCmdShow
    )
/*inicio do codigo main*/
{
 
    //TODO objeto usado para indicar a janela
    //* em outro video eu mostro o que sao objetos e classes;
    HWND hwnd; //! objeto pra indicar a janela
    MSG messages; //TODO objeto para exibir mensagem do windows
    WNDCLASSEX wincl; //* objeto pra criar a janela

    /*
    !AGORA AQUI IREMOS REALIZAR ALGUMAS
    !EDICOES NA NOSSA JANELA 
    !PRA QUE ELA POSSA ABRIR
    */
   wincl.hInstance = hThisInstance; //?indicando uma instancia para a janela ou seja sabe aquela funcao que eu mencionei la em cima?
   //*essa instancia seria tipo "WINDOWS: ok tem permissõo a minha, mas apenas nessa instancia aqui"
   //* DEV: ok
   wincl.lpszClassName = szClassName;
   wincl.lpfnWndProc = WindowProcedure;
   wincl.style = CS_DBLCLKS;
   wincl.cbSize = sizeof(WNDCLASSEX);
   wincl.hIcon = LoadIcon(NULL, IDI_APPLICATION);
   wincl.hIconSm = LoadIcon(NULL,IDI_APPLICATION); //?carrega o icone na janela
   wincl.hCursor = LoadCursor(NULL,IDC_ARROW); //?carrega cursor na janela
   wincl.lpszMenuName = NULL;
   wincl.cbClsExtra = 0;
   wincl.cbWndExtra = 0;
   wincl.hbrBackground = (HBRUSH)COLOR_BACKGROUND; //?definindo background como cinza
   
   //!se o registro da classe for mal sucedido
  if (!RegisterClassEx(&wincl)) return 0;

     hwnd = CreateWindowEx(
      0, szClassName, szTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,
      CW_USEDEFAULT, 544, 375, HWND_DESKTOP, NULL, hThisInstance, NULL);

   

   ShowWindow(hwnd,nCmdShow);

    //?USADO PARAA A JANELA PEGAR AS MESSAGES do WIndows
    while(GetMessage(&messages,NULL,0,0)){
        TranslateMessage(&messages);
        DispatchMessage(&messages);
        
        
    }
     

    
    return messages.wParam;

}

//TODO isso gerara a jaanela kk com os parametros certinhos
LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message,WPARAM wParam, LPARAM lParam)
{
    switch (message){
        
        case WM_CREATE: //?cria a janela
        break;
        case WM_COMMAND://? INTERPRETA A JANELA
        break;
        case WM_DESTROY:
        PostQuitMessage(0);
        break;
        default:
        return DefWindowProc(hwnd,message,wParam,lParam);
    }
    return 0;
    
}


//? espero que tenham gostado :)
//?ainda sou iniciante nessa aarea de criaar prograamas no desktop entao se eu errei algo