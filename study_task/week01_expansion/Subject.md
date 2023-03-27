# 라이브러리 확장하기

***

## 목표 

- 기존에 존재하는 라이브러리의 역할을 확장시켜보고 소스를 정리해봅시다.
- 기본적인 자료구조인 리스트를 알아보고, 이를 구현해봅니다.
- 구현한 자료구조를 사용해봅니다.

***

## 준수 사항

- 반드시 C를 이용하여 요구조건을 구현해야 합니다. C언어 이외의 구현은 인정되지 않습니다.

- 구현한 함수는 모두 제출된 레포지토리 안에 있어야합니다.

- 전역변수는 금지됩니다.

- 컴파일러는 gcc를 활용하며, '-Wall -Wextra -Werror' 플래그를 적용하여 컴파일이 되어야 합니다. 

- Makefile을 요구하는 경우 all, $(NAME), re, clean, fclean에 대한 룰을 정의해야 합니다. 또한 Makefile을 통해서 빌드할 때에 relink 되어서는 안됩니다.

- 작성한 구현체는 예기치않은 종료(SEGV, Buss Error 등)으로 종료되면 안됩니다.

- 작성한 구현체에서 어떠한 경우라도 메모리 누수가 일어나면 안됩니다.

***

## 요구 조건

### < 파트 1 >

파트 1에서 진행해야 할 부분은 기존의 라이브러리를 확장시켜서 요구사항에 맞는 몇몇 함수를 추가로 작성하는 것입니다.

|*-*|*ft_strequ*|
|--|--|
|Prototype|int  ft_strequ(char const *s1, char const *s2)|
|Description| 두 문자열 s1과 s2를 사전식으로 (lexicographically) 비교합니다.|
|Param 1| - 비교할 첫번째 문자열 |
|Param 2| - 비교할 두번째 문자열 |
|Return value| 두 문자열이 같다면 1, 틀리다면 0 |

|*-*|*ft_strnequ*|
|--|--|
|Prototype|int  ft_strnequ(char const *s1, char const *s2, size_t n)|
|Description| 두 문자열 s1과 s2를, 사이즈 n개의 문자만큼 혹은 '\0'에 도달할 때까지 사전식으로 (lexicographically) 비교합니다.|
|Param 1| - 비교할 첫번째 문자열 |
|Param 2| - 비교할 두번째 문자열 |
|Param 3| - 비교할 최대 길이|
|Return value| 두 문자열이 같다면 1, 틀리다면 0 |

|*-*|*ft_strjoin*|
|--|--|
|Prototype|char *ft_strjoin(char const *s1, char const *s2)|
|Description| 문자열을 동적할당하여, 두 문자열 s1과 s2를 순서대로 합친 '\0'로 끝나는 새로운 문자열을 반환합니다. 만약 동적할당이 실패하면 NULL을 리턴합니다.|
|Param 1| - 첫번째 문자열|
|Param 2| - 두번째 문자열 |
|Return value| 두 문자열을 합친 새로운 문자열을 리턴하거나, NULL을 리턴합니다.|
|allowed func| malloc(3)|

|*-*|*ft_substr*|
|--|--|
|Prototype|char *ft_substr(char const *s, unsigned int start, size_t len)|
|Description| 파라미터로 주어지는 문자열 s에서 start에 해당하는 인덱스에서 시작해 len만큼 잘라내어, 이를 동적할당으로 복사하여 반환합니다. 동적할당이 실패하는 경우 NULL을 리턴합니다.|
|Param 1| - 대상이 되는 문자열 |
|Param 2| - 문자열을 잘라내기 시작할 인덱스 |
|Param 3| - 잘라낼 문자열의 길이 |
|Return value| 잘라낸 문자열 |
|allowed func| malloc(3)|

|*-*|*ft_strtrim*|
|--|--|
|Prototype|char *ft_strtrim(char const *s)|
|Description| 파라미터로 받은 문자열 s에서 시작과 끝에서 whitespaces를 제거한 문자열을 동적할당으로 복사하여 반환합니다. whitespaces는 ' ', '\n', '\t' 세 가지 문자에 한합니다. 만약 whitespaces에 해당하는 문자가 문자열의 시작과 끝에서 존재하지 않는다면, s의 복사본을 반환합니다. 동적할당이 실패하면 NULL을 리턴합니다.|
|Param 1| - trim 작업의 대상이 되는 문자열|
|Return value| 작업을 마친 '새로운' 문자열 혹은 s가 복사된 문자열|
|allowed func| malloc(3)|

|*-*|*ft_split*|
|--|--|
|Prototype|char **ft_split(char const *s, char c)|
|Description| c를 기준으로 문자열을 자른 다음에, 자른 문자열들을 새로운 문자열로 동적할당하여 복사하고, 이 문자열들을 배열로 만들어 반환합니다. 새로 생성된 문자열들과 문자열들을 구성하는 배열은 그 끝이 '\0'로 마쳐야합니다. 동적할당이 실패된다면 NULL을 리턴해야 합니다. 예시로, ft_split("\*hello\*\*fellow\*students\*\*\*")는 ["hello", "fellow", "students"]를 반환합니다.|
|Param 1| - split의 대상이 되는 문자열 |
|Param 2| - 자르는 기준이 되는 delimiter 문자 |
|Return value| - split()의 결과물로 나오는, 새로운 문자열들로 이루어진 배열|
|allowed func| malloc(3),free(3) |

***

### < 파트 2 >

파트 2에서는 아래의 구조체를 기반으로 Linked-list를 구현하는 것입니다. Linked-list 중에서 아래의 기능을 하는 함수들을 구현하면 됩니다.

Linked-list의 각각의 노드들은 다음의 구조를 가집니다. 이를 libft.h에 추가하고 진행하면 됩니다.

```c
typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```


|*-*|*ft_lstnew*|
|--|--|
|Prototype|t_list *ft_lstnew(void const *content)|
|Description| t_list 구조체를 동적할당하고 이를 반환합니다. 멤버 변수인 content는 매개변수로 들어온 content의 값으로 초기화됩니다. 변수 next는 NULL로 초기화 됩니다. |
|Param 1| 새로운 노드의 content로 초기화될 content |
|Return value| 새로운 t_list 노드 |
|allowed func| malloc(3) |

|*-*|*ft_lstadd_front*|
|--|--|
|Prototype|void ft_lstadd_front(t_list **lst, t_list *new)|
|Description| 새로운 new 노드를 링크드 리스트 lst 시작에 추가합니다.  |
|Param 1| 추가할 링크드 리스트 lst의 시작 노드의 포인터 주소 |
|Param 2| 새롭게 링크드 리스트에 추가할 노드의 포인터 주소 |
|Return value| 없음 |

|*-*|*ft_lstadd_back*|
|--|--|
|Prototype|void ft_lstadd_back(t_list **lst, t_list *new)|
|Description| 새로운 new 노드를 링크드 리스트 lst 끝에 추가합니다.  |
|Param 1| 추가할 링크드 리스트 lst의 시작 노드의 포인터 주소 |
|Param 2| 새롭게 링크드 리스트에 추가할 노드의 포인터 주소 |
|Return value| 없음 |

|*-*|*ft_lstsize*|
|--|--|
|Prototype|size_t ft_lstsize(t_list *lst)|
|Description| 리스트의 노드의 갯수를 세어 반환합니다. |
|Param 1| 사이즈를 측정할 리스트의 시작점 |
|Return value| 리스트의 사이즈 |

|*-*|*ft_lstlast*|
|--|--|
|Prototype|t_list *ft_lstlast(t_list *lst)|
|Description| 리스트의 가장 마지막에 있는 노드를 반환합니다. |
|Param 1| 리스트의 포인터 주소 |
|Return value| 리스트가 가진 마지막 노드 |

|*-*|*ft_lstdelone*|
|--|--|
|Prototype|void ft_lstdelone(t_list \*lst, void (\*del)(void \*))|
|Description| 노드의 주소 lst를 파라미터로 받고, content를 인자로 받은 del 함수를 통해 삭제하고 노드를 free합니다. 노드의 next는 프리되어서는 안됩니다. |
|Param 1| free를 시킬 노드 |
|Param 2| 노드 내부의 content를 삭제하기 위한 함수의 포인터 주소 |
|Return value| 없음 |
|allowed func| free(3) |

|*-*|*ft_lstclear*|
|--|--|
|Prototype|void ft_lstclear(t_list \*\*lst, void (\*del)(void \*))|
|Description| 파라미터로 받은 노드의 주소 lst를 시작으로 이후에 있는 모든 노드를 삭제합니다. content는 인자로 받은 del 함수를 통해 삭제합니다. lst 포인터는 NULL로 초기화되어야 합니다.|
|Param 1| free를 시킬 노드 |
|Param 2| 노드 내부의 content를 삭제하기 위한 함수의 포인터 주소 |
|Return value| 없음 |
|allowed func| free(3) |

|*-*|*ft_lstiter*|
|--|--|
|Prototype|void ft_lstiter(t_list \*lst, void (\*f)(void \*))|
|Description| lst에 있는 모든 노드들을 조회하면서 함수 포인터로 받은 함수 f를 content에 적용합니다. |
|Param 1| 리스트의 포인터 주소 |
|Param 2| 리스트에 있는 노드들에 iteration을 하면서 사용할 함수 포인터의 주소 |
|Return value| 없음 |

|*-*|*ft_lstmap*|
|--|--|
|Prototype|t_list \*ft_lstmap(t_list \*lst, void \*(\*f)(void \*), void (\*del)(void \*))|
|Description| lst에 있는 모든 노드들을 조회하면서 함수 포인터로 받은 함수 f를 content에 적용하고, 이를 결과로 하는 새로운 리스트를 만듭니다. 필요시에 함수 포인터로 받은 함수 del을 이용하면서 content를 삭제할 수 있습니다. |
|Param 1| 리스트의 포인터 주소 |
|Param 2| 리스트에 있는 노드들에 iteration을 하면서 사용할 함수 포인터의 주소 |
|Param 3| 노드 내부의 content를 삭제하기 위한 함수의 포인터 주소 |
|Return value| 새로운 리스트. 동적할당이 실패할 경우 NULL을 반환 |
|allowed func| malloc(3), free(3) |

***

### < 파트 3 >

저번 과제와 파트 1,2 를 넘어오면서 많은 .c 파일들이 생겼습니다. 이를 정리해봅시다.

- lst를 다루는 ft_lst* 함수들의 코드가 담긴 파일을 별도의 ./lst/ 라는 디렉토리를 만들고 그 곳으로 옮깁니다.

- ./lst/ 폴더 안에 있는 .c 파일도 컴파일할 수 있도록 Makefile을 수정합니다.

- 다른 것도 해볼 수 있겠죠? :)


***

### 제출 기한과 평가

- 4월 1일 00시까지 제출해주세요.
- 제출 레포지토리에 작성한 결과물 전체를 제출해야합니다.
- 제출되는 코드는 테스터기로 평가되고, 리뷰를 통해 평가됩니다.

