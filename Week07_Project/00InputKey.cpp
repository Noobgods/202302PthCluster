
#include <iostream>
#include <windows.h>

#define MAX_INPUT_KEY 255

class Keyboard{
public:
    void Update();

	bool Down(DWORD key) { return keyMap[key] == KEY_INPUT_STATUS_DOWN; }
	bool Up(DWORD key) { return keyMap[key] == KEY_INPUT_STATUS_UP; }
	bool Press(DWORD key) { return keyMap[key] == KEY_INPUT_STATUS_PRESS; }
    
    Keyboard();
    ~Keyboard(){}
private:

    BYTE keyState[MAX_INPUT_KEY];
    BYTE keyOldState[MAX_INPUT_KEY];
	BYTE keyMap[MAX_INPUT_KEY];

	enum
	{
		KEY_INPUT_STATUS_NONE = 0,
		KEY_INPUT_STATUS_DOWN,
		KEY_INPUT_STATUS_UP,
		KEY_INPUT_STATUS_PRESS,
	};
};

Keyboard::Keyboard(){
	ZeroMemory(keyState, sizeof(keyState));
	ZeroMemory(keyOldState, sizeof(keyOldState));
	ZeroMemory(keyMap, sizeof(keyMap));
}

void Keyboard::Update(){
    memcpy(keyOldState, keyState, sizeof(keyOldState));

    ZeroMemory(keyState, sizeof(keyState));
	ZeroMemory(keyMap, sizeof(keyMap));
    GetKeyState(0);
    
    GetKeyboardState(keyState);

    for (DWORD i = 0; i < MAX_INPUT_KEY; i++)
    {
        BYTE key = keyState[i] & 0x80;
        keyState[i] = key ? 1 : 0;

        int oldState = keyOldState[i];
        int state = keyState[i];

        if (oldState == 0 && state == 1){
            keyMap[i] = KEY_INPUT_STATUS_DOWN;  //이전 0, 현재 1 - KeyDown
        }
        else if (oldState == 1 && state == 0){
            keyMap[i] = KEY_INPUT_STATUS_UP;    //이전 1, 현재 0 - KeyUp
        }
        else if (oldState == 1 && state == 1){
            keyMap[i] = KEY_INPUT_STATUS_PRESS; //이전 1, 현재 1 - KeyPress
        }
        else{
            keyMap[i] = KEY_INPUT_STATUS_NONE;
        }
    }
}

int main(){
    Keyboard input;

    while(1){
        input.Update();

        if(input.Down('W')){
            std::cout << "Down WWWW" <<std::endl;
        }
        else if(input.Up('W')){
            std::cout << "Up WWWW" << std::endl;
        }
        else if(input.Press('E')){
            std::cout << "Press EEEE" << std::endl;
        }
        else if(input.Press(VK_SPACE)){
            std::cout << "Press Space" << std::endl;
        }

        if(input.Down(VK_ESCAPE)){
            break;
        }
        Sleep(10);
    }
    return 0;
}