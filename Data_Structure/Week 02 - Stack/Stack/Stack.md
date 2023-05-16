# Stack

목표: 스택을 구현한다.

Stack은 LIFO(Last In First Out)의 자료구조이다. 스택은 데이터를 넣는 push와 데이터를 빼는 pop이라는 연산을 지원한다. push와 pop은 스택의 top에서만 일어난다. 스택의 top은 스택에 있는 가장 최근에 들어온 데이터를 가리킨다. 스택은 배열이나 연결리스트로 구현할 수 있다.

이번 과제에서는 저번 시간에서 활용했던 FixedArray를 활용하여 Stack을 구현한다.

- `createStack`: Stack을 생성한다. Stack의 크기를 인자로 받는다. Stack의 크기는 0보다 커야 한다. Stack의 크기가 0보다 작거나 같은 경우 NULL을 반환한다.

- `destroyStack`: Stack을 삭제한다. Stack의 모든 원소를 삭제하고 Stack을 삭제한다. Stack이 NULL인 경우 아무런 동작을 하지 않는다.

- `push`: Stack에 원소를 추가한다. Stack이 가득 차 있는 경우 아무런 동작을 하지 않는다. Stack이 NULL인 경우 아무런 동작을 하지 않는다.

- `pop`: Stack의 top에 있는 원소를 삭제한다. Stack이 비어있는 경우 아무런 동작을 하지 않는다. Stack이 NULL인 경우 아무런 동작을 하지 않는다.

- `peek`: Stack의 top에 있는 원소를 반환한다. Stack이 비어있는 경우 NULL을 반환한다. Stack이 NULL인 경우 NULL을 반환한다.

- `isEmpty`: Stack이 비어있는지 확인한다. Stack이 NULL인 경우 1을 반환한다.

- `isFull`: Stack이 가득 차 있는지 확인한다. Stack이 NULL인 경우 1을 반환한다.

- `size`: Stack의 크기를 반환한다. Stack이 NULL인 경우 0을 반환한다.

- `capacity`: Stack의 최대 크기를 반환한다. Stack이 NULL인 경우 0을 반환한다.

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

- Stack.h 파일에 있는 함수들을 구현해야 합니다. 구현해야하는 함수들의 프로토타입은 지정되어 있습니다.

- 구현한 함수는 Stack.c 파일 안에 작성해야 합니다.

- 구현한 함수는 Stack.h 파일에 선언되어 있는 함수들을 구현한 동작과 예외 처리를 수행해야 합니다.

- 예외 처리에 대해 고민해야 합니다. 

***

