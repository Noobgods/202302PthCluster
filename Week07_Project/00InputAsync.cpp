#include <iostream>
#include <windows.h>

#define KEY_DOWN(vk_c) ((GetAsyncKeyState(vk_c) & 0x8000)? 1 : 0)
#define KEY_UP(vk_c) ((GetAsyncKeyState(vk_c) & 0x8000)? 0 : 1)
#define KEY_PRESS(vk_c) ((GetAsyncKeyState(vk_c) & 0x8001)? 1 : 0)

int main(){
    while(1){
        if(KEY_DOWN('W')){
            std::cout << "Down WWWW" << std::endl;
        }
        if(KEY_UP('W')){
            std::cout << "Up WWWW" << std::endl;
        }
        if(KEY_PRESS('E')){
            std::cout << "Press EEEE" << std::endl;
        }
        if((GetAsyncKeyState(VK_SPACE) & 0x0001) ? 0 : 1){
            std::cout << "not press Space" << std::endl;
        }

        if(KEY_DOWN(VK_ESCAPE)){
            break;
        }
        Sleep(100);
    }
    return 0;
}

/*
0x0000: 이전에 누른 적이 없고 호출시점에 안 눌린 상태
0x0001: 이전에 누른 적이 있고 호출시점에 안 눌린 상태
0x8000: 이전에 누른 적이 없고 호출시점에 눌린 상태
0x8001: 이전에 누른 적이 있고 호출시점에 눌린 상태
*/