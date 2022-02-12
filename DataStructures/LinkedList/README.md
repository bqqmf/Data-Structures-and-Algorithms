# 연결리스트

## 연결리스트란
연결 리스트, 링크드 리스트(linked list)는 각 노드가 데이터와 포인터를 가지고 한 줄로 연결되어 있는 방식으로 데이터를 저장하는 자료 구조이다. 이름에서 말하듯이 데이터를 담고 있는 노드들이 연결되어 있는데, 노드의 포인터가 다음이나 이전의 노드와의 연결을 담당하게 된다.

## 종류
* 단일 연결 리스트
* 이중 연결 리스트

여기에서는 단일 연결 리스트만 다룬다.

## 코드 예시
```cpp
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL; // 첫 번째 Node를 가리키는 포인터 생성
    Node* second = NULL; // 두 번째 Node를 가리키는 포인터 생성
    Node* third = NULL; // 세 번째 Node를 가리키는 포인터 생성

    // 힙 영역에 동적할당.
    head = new Node();
    second = new Node();
    third = new Node();

    /*
    동적할당 후, 값을 할당하지 않았기 때문에 랜덤 값이 들어있다.
    여기서는 #으로 랜덤 값을 표현하였다.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +---+---+
    | # | # |     | # | # |     | # | # |
    +---+---+     +---+---+     +---+---+

    */

    head->data = 1; // 첫 번째 노드에 값 할당
    head->next = second; // 첫 번째 노드와 두 번째 노드 연결

    /*
    head에 의해 가리켜지는 첫 번째 노드에 값이 할당되었고
    첫 번째 노드의 next 포인터는 second에 의해 가리켜지는
    두 번째 노드를 가리킴으로써 연결되었다.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +---+---+
    | 1 | o-----> | # | # |     | # | # |
    +---+---+     +---+---+     +---+---+

    */

    second->data = 2; // 두 번째 노드에 값 할당
    second->next = third; // 두 번째 노드와 세 번째 노드 연결

    /*
    second에 의해 가리켜지는 두 번째 노드에 값이 할당되었고
    두 번째 노드의 next 포인터는 third에 의해 가리켜지는
    세 번째 노드를 가리킴으로써 연결되었다.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +---+---+
    | 1 | o-----> | 2 | o-----> | # | # |
    +---+---+     +---+---+     +---+---+

    */

    third->data = 3; // 세 번째 노드에 값 할당
    third->next = NULL;

    /*
    third에 의해 가리켜지는 세 번째 노드에 값이 할당되었고
    세 번째 노드의 next 포인터는 NULL을 가리킴으로써 세 번째
    노드가 마지막 노드임을 나타낸다.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +---+------+
    | 1 | o-----> | 2 | o-----> | 3 | NULL |
    +---+---+     +---+---+     +---+------+
    
    */

        return 0;
}
```

![Diagram of singly linked list structure](https://miro.medium.com/max/700/1*snD232-iZfXiqToLE-AIHA.png "(Diagram of singly linked list structure)")

## 연결 리스트 vs 배열
배열은 요소들을 메모리에 연속적으로 저장한다. 그래서 저장된 요소들의 주소를 쉽게 계산할 수 있다. 이 덕분에 특정 인덱스에 위치한 요소에 빠르게 접근할 수 있다.

연결 리스트는 요소(Node)들을 연속적으로 저장하지 않는다. 따라서 요소 안에 다음 요소를 가리킬 추가적인 공간(next)과 함께 값(data)을 저장한다.

이러한 차이로 인해 주어진 상황에 따라 더 적합한 자료 구조를 선택해야 한다. 


다음은 주요 차이점들이다.
* **크기** : 배열에서는 값들이 메모리에 연속적으로 저장되기 때문에, 실행되는 동안에는 배열의 크기를 변경할 수 없다. 다른 메모리의 값을 덮어쓸 위험이 있기 때문이다. 하지만 연결 리스트에서는 각 요소들이 떨어져 있는 다음 요소를 가리키기 때문에 실행되는 동안에도 크기를 변경할 수 있다.

* **메모리 할당** : 배열은 컴파일하는 동안에 메모리에 할당되고 연결 리스트는 실행되는 동안에 메모리에 할당된다. 하지만 동적으로 배열을 할당하는 경우에는 실행되는 동안에 메모리에 할당된다.

* **메모리 효율** : 같은 개수의 요소를 가지고 있다면, 다음 요소를 가리킬 next가 data와 함께 저장되기 때문에 연결 리스트가 메모리를 더 많이 사용한다. 하지만 배열을 메모리에 할당하고 나서 사용되지 않는 공간이 있다면 사용하지 않는 만큼 낭비가 되지만, 연결리스트는 사용할 만큼만 할당한다는 장점이 있다.

* **실행 시간** : 배열은 인덱스를 통해 쉽게 모든 요소에 접근할 수 있다. 하지만 연결리스트의 경우에, 특정 요소에 접근하기 위해서는 이전의 모든 요소들을 거쳐야 한다. 또한 배열에서의 cache locality(기억 장치 내의 정보를 균일하게 접근하는 것이 아닌 어느 한순간에 특정 부분을 집중적으로 참조하는 특성)가 상당히 성능을 향살시킬 수 있다. 결과적으로, 배열에서 빠른 연산들(특정 요소 수정 등)이 있고 연결 리스트에서 빠른 연산들(요소 삽입, 삭제 등)이 있다. 