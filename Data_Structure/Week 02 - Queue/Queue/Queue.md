# Queue

목표: Queue를 구현합니다.

Queue는 FIFO(First In First Out)의 특징을 가지는 자료구조입니다. Queue는 다음과 같은 함수를 지원합니다. Queue는 내부적으로 다양한 방법으로 구현될 수 있습니다. 이번 과제에서는 저번 시간에 활용했던 DoubleLinkedList를 활용하여 Queue를 구현합니다.

- `createQueue`: Queue를 생성합니다. Queue의 크기를 인자로 받습니다. Queue의 크기는 0보다 커야 합니다. Queue의 크기가 0보다 작거나 같은 경우 NULL을 반환합니다.

- `destroyQueue`: Queue를 삭제합니다. Queue의 모든 원소를 삭제하고 Queue를 삭제합니다. Queue가 NULL인 경우 아무런 동작을 하지 않습니다.

- `enqueue`: Queue에 원소를 추가합니다. Queue가 가득 차 있는 경우 아무런 동작을 하지 않습니다. Queue가 NULL인 경우 아무런 동작을 하지 않습니다.

- `dequeue`: Queue의 첫 번째 원소를 삭제합니다. Queue가 비어있는 경우 아무런 동작을 하지 않습니다. Queue가 NULL인 경우 아무런 동작을 하지 않습니다.

- `peek`: Queue의 첫 번째 원소를 반환합니다. Queue가 비어있는 경우 NULL을 반환합니다. Queue가 NULL인 경우 NULL을 반환합니다.

- `isEmpty`: Queue가 비어있는지 확인합니다. Queue가 비어있는 경우 1을 반환합니다. Queue가 NULL인 경우 1을 반환합니다. Queue가 비어있지 않은 경우 0을 반환합니다.

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

- Queue.h 파일에 있는 함수들을 구현해야 합니다. 구현해야하는 함수들의 프로토타입은 지정되어 있습니다.

- 구현한 함수는 Queue.c 파일 안에 작성해야 합니다.

- 구현한 함수는 Queue.h 파일에 선언되어 있는 함수들을 구현한 동작과 예외 처리를 수행해야 합니다.

- 예외 처리에 대해 고민해야 합니다. 

***

