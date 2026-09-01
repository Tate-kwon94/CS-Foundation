# Bug hunt

Do not run these snippets. For each one, write:

1. whether the program is valid;
2. the lifetime or ownership mistake;
3. the smallest repair;
4. the preferred modern C++ design.

## A. Read before initialization

```cpp
int* count = new int;
std::cout << *count << '\n';
delete count;
```

## B. Pointer and reference after deletion

```cpp
int* value = new int{42};
int& alias = *value;

delete value;
value = nullptr;

std::cout << alias << '\n';
```

## C. Two pointers, one allocation

```cpp
int* first = new int{7};
int* second = first;

delete first;
delete second;
```

## D. Address of a local object

```cpp
int* makeReading() {
  int reading = 25;
  return &reading;
}
```

## E. Early return

```cpp
void process(bool ready) {
  int* buffer = new int[100];

  if (!ready) {
    return;
  }

  delete[] buffer;
}
```

## F. Wrong form of delete

```cpp
int* samples = new int[10]{};
delete samples;
```
