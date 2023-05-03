# Vector

목표: 동적 배열을 구현한다.

고정 길이 배열에서 대표적인 단점으로, 초기화 시점에 배열의 크기를 정해야 합니다. 이를 해결하기 위해 동적 배열을 구현합니다. 동적 배열은 고정 길이 배열과 달리 배열의 크기보다 더 많은 양의 원소들이 들어올 때 배열의 크기를 동적으로 변경할 수 있습니다. 이를 위해 C++의 std::vector와 비슷한 동작을 하는 Vector를 구현합니다.

C++의 Vector는 내부에 할당한 사이즈가 다 차게되면 임의로 공간을 재할당하고, 기존의 데이터를 새로운 공간으로 복사합니다. 통상적으로 재할당은 기존의 공간의 2배의 크기로 할당합니다. 이를 통해 재할당의 횟수를 줄이고, 재할당에 드는 비용을 줄입니다. 이를 위해 Vector는 다음과 같은 멤버 변수를 가집니다.

```cpp
template <typename T> // T는 Vector가 담을 데이터 타입
class Vector
{
    T* _data; // Vector가 담을 데이터를 가리키는 포인터
    size_t _size; // Vector가 담고 있는 데이터의 개수
    size_t _capacity; // Vector가 기존에 할당한, 담을 수 있는 데이터의 개수
};
```

C++의 벡터는 다음과 같이 동작한다.

```cpp
#include <vector>

int main()
{
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for (int i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << std::endl;

    return 0;
}
```

위 코드는 다음과 같이 동작한다.

```
1
2
3
```

***

준수 사항

- 반드시 C를 이용하여 요구조건을 구현해야 합니다. C언어 이외의 구현은 인정되지 않습니다.

- 전역변수는 금지됩니다.

- 컴파일러는 gcc를 활용하며, '-Wall -Wextra -Werror' 플래그를 적용하여 컴파일이 되어야 합니다.

- Makefile을 요구하는 경우 all, $(NAME), re, clean, fclean에 대한 룰을 정의해야 합니다. 또한 Makefile을 통해서 빌드할 때에 relink 되어서는 안됩니다.

- 작성한 구현체는 예기치않은 종료(SEGV, Buss Error 등)으로 종료되면 안됩니다.

- 메모리 누수가 발생하면 안됩니다.

***

요구 조건

- Vector.h 파일에 있는 함수들을 구현해야 합니다. 구현해야하는 함수들의 프로토타입은 지정되어 있습니다.

- 구현한 함수는 Vector.c 파일 안에 작성해야 합니다.

- 첨부된 Vector.h 파일을 include하여 지정된 구조체를 활용하여 구현합니다. 필요한 경우 구조체 및 헤더파일의 내용을 변경할 수 있습니다.

- Vector.h 파일에서 함수의 프로토타입은 수정할 수 없습니다.

***

