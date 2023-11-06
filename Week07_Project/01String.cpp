#include<iostream>
#include<string>

int main(){
    char cstr[100];
    std::cin.getline(cstr, 100);

    std::string sstr1;
    std::getline(std::cin, sstr1);

    int n;
    std::string sstr2;
    std::cin >> n;

    std::cin.ignore();
    std::getline(std::cin, sstr2);   // ignore 추가!!

    // 문자열 비교, 합치기 가능
    if (sstr1 == sstr2){
        std::cout << "same string." << std::endl;
    }
    else if(sstr1 < sstr2){
        sstr2 += sstr1;
        std::cout << sstr2 << std::endl;
    }
    else if(sstr1 > sstr2){
        sstr1 += sstr2;
        std::cout << sstr1 << std::endl;
    }

    // 문자열 찾기
    std::string findstr("My name is john.");

    std::string keyword;
    std::cin >> keyword;

    //find 함수는 char를 쓰기 때문에 변환
    if(findstr.find(keyword.c_str())){
        std::cout << "found " <<findstr.find(keyword.c_str())<< std::endl;
    }
    else {
        std::cout << "none" << std::endl;
    }

    return 0;
}