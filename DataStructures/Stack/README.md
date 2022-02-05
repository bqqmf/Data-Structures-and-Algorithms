# 스택
스택을 구현하는 방법에는 3가지가 있습니다.
* list
* collections.deque
* queue.LifoQueue

 스레드(thread)를 사용하는 환경에서는 LifoQueue를, 사용하지 않는 환경에서는 deque으로 구현하는 것이 좋습니다.
 https://realpython.com/how-to-implement-python-stack/#implementing-a-python-stack 

## 시간 복잡도

collections.queue를 통해 스택을 구현하면 append() 함수로 Push를 수행합니다.
|연산|평균 수행시간|최악 수행시간|
|:-:|:---------:|:---------:|
|Push (append)|`O(1)`|`O(1)`|
|Pop|`O(1)`|`O(1)`|

## 구현


## 응용




## 참고자료

- [위키백과](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- [realpython](https://realpython.com/how-to-implement-python-stack/#implementing-a-python-stack)
- [geeksforgeeks](https://www.geeksforgeeks.org/stack-data-structure)
- [wiki python](https://wiki.python.org/moin/TimeComplexity)
