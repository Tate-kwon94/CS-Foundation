# Answer key

Open this file only after completing `attempts.md`.

## Quiz

1. `value` names one `int` object, `7` is its stored value, and `&value` is its
   address.
2. `p` stores `value`'s address. `*p` accesses the `int` object at that address.
3. `p` is the stored address, `*p` is the pointed-to object, `&p` is the address of
   the pointer object itself, and `&value` is the address of the `int`.
4. There is still one `int`. Both pointers contain the same address and alias that
   object.
5. `p = q` copies an address and redirects `p`. `*p = *q` copies an `int` value while
   leaving both pointer addresses unchanged.
6. A reference creates another name for the same object. It cannot later be rebound;
   assigning through it changes the referenced object.
7. `new int;` default-initializes the `int`, leaving its value indeterminate.
   `new int{};` value-initializes it to zero.
8. `delete p;` ends the dynamically allocated object's lifetime and releases its
   storage. The pointer object `p` remains and still contains the old address until
   changed.
9. Setting `p` to `nullptr` makes accidental reuse of `p` easier to detect. It does not
   repair any other pointer or reference that still contains or aliases the old
   address.
10. Stack direction, heap direction, and their relative address ranges are platform
    and implementation details, not portable C++ guarantees.
11. Use `.` with an object and `->` with a pointer to an object. `pointer->member()` is
    equivalent to `(*pointer).member()`.
12. Automatic objects, containers, and smart pointers connect cleanup to object
    lifetime, reducing leaks, double deletion, and exception-related errors.

## Trace outputs

```text
Puzzle 1: 8 8
Puzzle 2: 2 10 10 10
Puzzle 3: 4 7 4 7
Puzzle 4: 9 9 true
Puzzle 5: 15 15
Puzzle 6: 1 10 10
```

Important relationships:

- Puzzle 2 copies an address, so both pointers end at `second`.
- Puzzle 3 copies a value, so each pointer continues to point to its original object.
- Puzzle 4's pointer and reference access the same dynamically allocated `int`.
- Puzzle 5 shows that `pointer->member()` and `(*pointer).member()` access the same
  object.
- Puzzle 6 uses a reference to a pointer, allowing `redirect` to change the caller's
  pointer itself.

## Bug hunt

### A

Reading the indeterminate value has undefined behavior. Initialize it with
`new int{}` or, preferably here, use an automatic `int count{};`.

### B

Both the allocation and the object lifetime end at `delete`. Assigning `nullptr` only
changes `value`; `alias` remains a dangling reference. Do not use either alias after
deletion. Prefer an automatic object when dynamic lifetime is unnecessary.

### C

Both pointers refer to one allocation. The first deletion ends it; the second deletion
is undefined behavior. One allocation must have one owner. Prefer
`std::unique_ptr<int>` when dynamic ownership is needed.

### D

`reading` is destroyed when the function returns, so the returned pointer dangles.
Return the `int` by value.

### E

The early return skips `delete[]`, leaking the allocation while the process continues.
Use `std::array<int, 100>` for a fixed-size local buffer or `std::vector<int>` for a
dynamic-size buffer.

### F

An array created with `new[]` must be released with `delete[]`. The smallest repair is
`delete[] samples;`; the preferred design is `std::array<int, 10>` or
`std::vector<int>`.
