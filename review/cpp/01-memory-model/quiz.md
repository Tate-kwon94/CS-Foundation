# Closed-book quiz

Write every answer in `attempts.md` before looking at the answer key.

## Part A: mental model

1. In `int value = 7;`, what are the object, value, and address?
2. In `int* p = &value;`, what does `p` store and what does `*p` mean?
3. How are `p`, `*p`, `&p`, and `&value` different?
4. After `int* q = p;`, how many `int` objects exist and what do `p` and `q` point to?
5. Explain the difference between `p = q;` and `*p = *q;`.
6. What does `int& alias = value;` create? Can `alias` later be rebound to another
   `int`?
7. Compare `new int;` with `new int{};`.
8. What exactly ends when `delete p;` executes? What remains unchanged?
9. Why is `p = nullptr;` commonly used after `delete p;`? What problem does it not
   solve if another pointer or reference aliases the same object?
10. Why is comparing the numeric size of stack and heap addresses not a portable way
    to identify storage?
11. Explain `object.member()` versus `pointer->member()`.
12. Why should modern C++ generally prefer automatic objects, standard containers,
    and smart pointers over raw `new` and `delete`?

## Part B: explain without jargon

Explain each line as though teaching someone who has never seen a pointer:

```cpp
int temperature = 25;
int* reading = &temperature;
int& alias = *reading;
alias = 30;
```

Draw one memory diagram after the last line.
