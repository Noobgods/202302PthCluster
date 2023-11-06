#include <iostream>
#include <windows.h>

int main(){
    while(1){
        if(GetAsyncKeyState('W') & 0x8000){
            std::cout << "Down WWWW" << std::endl;
        }
        else if(GetAsyncKeyState('W') & 0x0001){
            std::cout << "Up WWWW" << std::endl;
        }
        else if(GetAsyncKeyState('E') & 0x8001){
            std::cout << "Press EEEE" << std::endl;
        }
        else if(GetAsyncKeyState(VK_SPACE) & 0x8001){
            std::cout << "Press Space" << std::endl;
        }

        if(GetAsyncKeyState(VK_ESCAPE)){
            break;
        }
        Sleep(10);
    }
    return 0;
}