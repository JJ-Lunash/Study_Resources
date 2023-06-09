# FixedArray

목표: 고정 크기의 배열을 구현한다.

이번 시간에는 고정 크기의 배열을 구현하는 것을 목표로 합니다. 고정 크기의 배열은 크기가 고정되어 있기 때문에 배열의 크기를 변경할 수 없습니다. 따라서 배열의 크기를 변경하는 함수는 구현하지 않습니다. 하지만 배열의 크기가 고정되어 있기에 생기는 문제점과 장단점이 있습니다. 이러한 문제점과 장단점을 이해하고 고정 크기의 배열을 구현하는 것이 이번 시간의 목표입니다.

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

- FixedArray.h 파일에 있는 함수들을 구현해야 합니다. 구현해야하는 함수들의 프로토타입은 지정되어 있습니다.

- 구현한 함수는 FixedArray.c 파일 안에 작성해야 합니다.

- 첨부된 FixedArray.h 파일을 include하여 지정된 구조체를 활용하여 구현합니다. 필요한 경우 구조체 및 헤더파일의 내용을 변경할 수 있습니다.

- FixedArray.h 파일에서 함수의 프로토타입은 수정할 수 없습니다.

- 에러처리에 대해서 고려해보세요. 주어진 환경에서 어떠한 방법을 선택했는지에 대해서 설명해보세요.

***

