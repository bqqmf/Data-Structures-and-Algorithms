# 스택

## 스택이란
스택은 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 선형 구조(LIFO - Last In First Out)으로 되어 있다. 자료를 넣는 것을 '밀어넣는다' 하여 푸쉬(push)라고 하고 반대로 넣어둔 자료를 꺼내는 것을 팝(pop)이라고 하는데, 이때 꺼내지는 자료는 가장 최근에 푸쉬한 자료부터 나오게 된다. 이처럼 나중에 넣은 값이 먼저 나오는 것을 LIFO 구조라고 한다.

스택을 구현하는 방법에는 2가지가 있다.
* array
* linked list

Stack.py에서는 array로 스택을 구현했다.

## 주요 연산의 시간 복잡도

|연산|평균 수행시간|최악 수행시간|
|:-:|:---------:|:---------:|
|Push|`O(1)`|`O(1)`|
|Pop|`O(1)`|`O(1)`|


## 사용 예
* 괄호 짝짓기
* 연산자 표기법 변환
* 오큰수 (NGE)

## 참고자료
- [위키백과](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- [geeksforgeeks](https://www.geeksforgeeks.org/stack-data-structure)
