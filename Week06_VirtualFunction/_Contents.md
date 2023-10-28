# 가상 함수 (Virtual Function)

기초클래스에서 정의되어 있는 함수를 파생클래스에서 재정의가 가능한 함수. 

```cpp
class Super {
    virtual void function(){
        /* 구현부분... */
    }
};

class Sub : public Super{
    virtual void function(){
        /* 구현부분... */
    }
}

```

가상함수를 파생클래스에서 재정의(덮어쓰기) 하는 것을 __오버라이딩__ 이라고 한다.

재정의된 함수는 함수를 호출하는 인스턴스(객체)에 따라 해당 클래스에 정의되어 있는 함수를 사용한다.

<br/>

## 순수 가상 함수 (Pure Virtual Function)

__순수 가상 함수__ 는 파생클래스에서 __반드시 재정의__ 해줘야 하는 함수를 말한다. (일반 가상함수는 재정의 하지 않아도 오류가 없음.)

```cpp
class Super{
    virtual void funcion() = 0;
};

class Sub : public Super{
    virtual void function(){
        /* 구현부분... */
    }
};
```

<br/>

### Override 키워드
> `override` 키워드는 파생클래스에서 재정의할 함수를 컴파일러에서 검증해주게 하는 키워드이다.   
> `virtual` 키워드만 사용하여 함수를 재정의할때 기초클래스에서 가상함수로 설정되어 있지 않은 경우에 검증없이 컴파일이 되는 반면,    
> `override` 키워드를 사용하면 컴파일러에서 가상함수 여부를 검증한다.   
> (재정의하면 안되는 함수를 재정의할때 범하는 휴먼에러를 방지하기 위해 C++11 이후로 생겨난 키워드이다.)

올바른 오버라이딩
```cpp
class Super{
    virtual void function() = 0;  
};

class Sub : public Super{
    virtual void function() override{
        /* 구현부분... */
    }
};
```

잘못된 오버라이딩 (에러는 없다.)
```cpp
class Super{
    void function() = 0;  
};

class Sub : public Super{
    void function(){
        /* 구현부분... */
    }
};
```

잘못된 오버라이딩 (에러 발생)
```cpp
class Super{
    void function() = 0;  
};

class Sub : public Super{
    void function() override{
        /* 구현부분... */
    }
};
```

<br/>

## 추상클래스 (Abstract Class)

__추상클래스__ 는 하나 이상의 __순수 가상 함수__ 를 가지고 있는 클래스이다.    
C++ 에서는 다른 멤버변수,함수를 가지고 있어도 추상클래스처럼 사용하지만 타 언어에선 순수 가상 함수(추상메서드)로만 구성된 클래스를 추상클래스라고 한다.

```cpp
class Super{    // 추상클래스
    virtual void function_1() = 0;
    virtual void function_2() = 0;
};
class Sub : public Super{
    virtual void function1() override{
        /* 구현부분1... */
    }
    virtual void function2() override{
        /* 구현부분2... */
    }
};
```
