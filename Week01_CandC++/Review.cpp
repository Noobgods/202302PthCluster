#include <cstdio>

void function1();
void function2(int arg1, int arg2);
int function3(int arg1, int arg2);

int main(){
    printf("Hello World!\n");

    int n = 2;
    float f = 3.14;
    char c = 'c';
    
    /*
        &&  AND
        ||  OR
        ++  가산연산자
        --  감산연산자
        %   나머지
        !=  다르다
        ==  같다
        =   대입(오른쪽에서 왼쪽으로)
        +=  왼쪽에 있는거에 오른쪽 더하기 (*= -= /= %=)
    */

    bool check = true;

    if(check){
        printf("if True!!\n");
    }    
    else {
        printf("if False!!\n");
    }

    // 조건

    int score;
    scanf("%d", &score);

    if (score >= 80){
        printf("A\n");
    }
    else if(score >= 70 && score < 80){
        printf("B\n");
    }
    else if(score >= 60 && score < 70){
        printf("C\n");
    }
    else
        printf("F\n");


    // 반복

    for (int i = 0; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    int i = 0;
    while (i < 10){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // 배열    
    int array[10];
    for(int i = 0; i< 10; i++){
        array[i] = i;
    }  
    // array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    
    for(int i = 0; i< 10; i++){  // 0 <= i < 10
        printf("%d ", array[i]);
    }
    printf("\n");

    // 함수
    function1();

    function2(1, 3);

    int ret = function3(2, 7);
    printf("%d\n", ret);

    return 0;
}


void function1(){
    printf("function1\n");
}

void function2(int arg1, int arg2){
    printf("arg1 : %d, arg2 : %d\n", arg1, arg2);
}

int function3(int arg1, int arg2){
    return arg1 + arg2;
}