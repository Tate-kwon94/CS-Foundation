# C++ vs Python 대응표

ACSF(C++)를 들으며 파이썬 경험과 매핑하는 개인 노트. 배울 때마다 갱신.
※ 과제 코드는 올리지 않음(명예규정) — 개념과 자기 예제만.

## 기본 문법

| 개념 | Python | C++ | 메모 |
|---|---|---|---|
| 변수 선언 | `x = 5` | `int x = 5;` | 타입 명시 + 세미콜론 |
| 문자열 | `s = "hi"` | `std::string s = "hi";` | `#include <string>` |
| 출력 | `print(x)` | `std::cout << x << std::endl;` | `#include <iostream>` |
| 리스트 | `[1,2,3]` | `std::vector<int> v{1,2,3};` | `#include <vector>` |
| 딕셔너리 | `{"a":1}` | `std::map<std::string,int> m;` | 정렬됨 / `unordered_map`은 해시 |
| 반복 | `for x in v:` | `for (int x : v) { }` | range-based for |
| 함수 | `def f(a):` | `int f(int a) { }` | 반환 타입 명시 |
| 클래스 | `class A:` | `class A { public: ... };` | 접근제어자 + 끝에 세미콜론 |

## 파이썬에 없는 개념 (2주차~)

- **스택 vs 힙**: 
- **포인터 / 참조**: 
- **생성자 / 소멸자**: 
- **복사 생성자 / 대입 연산자**: 
- **템플릿**: 

## 헷갈렸던 것

- 
