# C 언어 라이브러리를 만들어봅시다.

***

목표 

- 기존에 존재하는 라이브러리의 명세와 동작원리를 파악하는 방법을 찾고 익힙니다.
- string.h 등에서 있는 기존의 함수를 다루고 구현하면서 포인터와 동적할당에 대해 익숙해집니다.
- 이를 기반으로 주어진 명세에 따라 새로운 함수들을 구현할 수 있습니다.

***

준수 사항

- 반드시 C를 이용하여 요구조건을 구현해야 합니다. C언어 이외의 구현은 인정되지 않습니다.

- 구현한 함수는 모두 제출된 레포지토리 안에 있어야합니다.

- 전역변수는 금지됩니다.

- 컴파일러는 cc를 활용하며, '-Wall -Wextra -Werror' 플래그를 적용하여 컴파일이 되어야 합니다. 

- Makefile을 요구하는 경우 all, $(NAME), re, clean, fclean에 대한 룰을 정의해야 합니다. 또한 Makefile을 통해서 빌드할 때에 relink 되어서는 안됩니다.

- 작성한 구현체는 예기치않은 종료(SEGV, Buss Error 등)으로 종료되면 안됩니다.

***

요구 조건

< 파트 1 >

파트 1에서 있는 부분들은 string.h에 있는 함수들을 구현하는 것입니다. 아래의 함수들에 대한 정보를 찾고 동작하도록 구현해보세요.

- memmove
- memcpy
- strlen
- strcat
- strchr
- strcpy
- strdup
- strcmp
- strncmp
- strncpy
- strstr
- strrchr
- atoi
- itoa
- isalpha
- isdigit
- isascii
- isprint
- toupper
- tolower
- bzero

< 파트 2 >

- 위의 함수들을 Makefile을 이용하여 libft.a라는 파일로 만들어야 합니다.


***

제출 기한과 평가

- 23일 12시까지 제출해주세요.
- 제출 레포지토리에 작성한 결과물 전체를 제출해야합니다.
- 제출되는 코드는 테스터기로 평가되고, 리뷰를 통해 평가됩니다.

