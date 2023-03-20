/*
*esse é um script no qual eu encotrei no site http://www.winprog.org/tutorial/dialogs.html
TODO ele parece ser bem mais simples do que o anterior que eu ostei em WINDOWSINWINDOWS
!por conta disso focarei mais nessa pasta atualmente para aprender a criar GUI
?AMANHA IREI VER DE CRIAR AS CAIXAS DE DIALOGO DESSE PROGRAMA E JUNTAMENTE DISSO VERIFICAREI DE INSERIR UMAGENS E TEXTOS PERSONALIZADOS

?ESSE CODIGO NAO SOFRERA ALTERAÇÕES APENAS AQUELES QUE ESTÃO NESSA PASTA POREM ESSE CODIGO EM SI NAO POIS ELE SERA USADO PARA ESTUDO
*/

#include<windows.h>

const char g_szClassName[] = "myWindowClass";

//TODO definindo funcao callback para iniciar janelas(ela é precisa por causa do windows se nao me engano)
LRESULT CALLBACK WndProc(HWND hwnd,UINT msg, WPARAM wParam,LPARAM lParam){
    switch (msg)
    {
        case WM_CLOSE:
        DestroyWindow(hwnd);
            break;
        case WM_DESTROY:
        PostQuitMessage(0);
            break;
        default:
        return DefWindowProc(hwnd,msg,wParam,lParam);
    }
    return 0;
}


//TODO aqui inicia o codigo MAIN da janela
//TODO iniciando a classe da janela
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = 0;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL,IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm = LoadIcon(NULL,IDI_APPLICATION);
//!se a REGISTERCLASSEX estiver "LOTADA" exiba mensagem de erro
    if(!RegisterClassEx(&wc)){
        MessageBox(NULL, "window registration failed please try again", "Error",MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }
//?CRIANDO JANELA
    hwnd = CreateWindowEx(
        WS_EX_CLIENTEDGE,
        g_szClassName,
        "titulo da janela",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,CW_USEDEFAULT, 1200/*x*/,800/*y*/,
        NULL,NULL,hInstance,NULL);
    if(hwnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;

    }

    ShowWindow(hwnd,nCmdShow);
    UpdateWindow(hwnd);
    //TODO Step 3: EXIBINDO MENSAGENS
    while (GetMessage(&Msg,NULL,0,0)>0)
    {
       TranslateMessage(&Msg);
       DispatchMessage(&Msg);
    }
    return Msg.wParam;
    


}