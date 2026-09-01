# LeetCode bridge

This is a readiness map, not a deadline. Do not wait until every CS topic is complete,
but do not use LeetCode to skip the language fundamentals needed to reason about a
solution.

## Entry gate

Start the first problem group when you can do all of the following without copying:

- use `std::vector` and `std::string`;
- write a function and pass a large object by `const` reference;
- distinguish an index, value, iterator, pointer, and reference;
- explain `O(1)`, `O(n)`, and `O(n^2)` using one of your own loops;
- trace variable changes through a small function call;
- compile and diagnose basic warnings.

## Pattern order

| Stage | Pattern | Foundation to review first | Initial target |
|---|---|---|---|
| 1 | Arrays and strings | vector, string, loops, indexing | 4 problems |
| 2 | Hash maps and sets | hashing idea, map vs unordered_map | 4 problems |
| 3 | Two pointers | references, indices, loop invariants | 4 problems |
| 4 | Stack and queue | stack/queue implementation | 4 problems |
| 5 | Linked lists | object lifetime, pointers, nullptr | 4 problems |
| 6 | Binary search | invariants, integer boundaries | 4 problems |
| 7 | Trees: DFS/BFS | recursion, explicit stack/queue | 6 problems |

The targets count distinct problems. Re-solving a problem is recorded separately and
is more valuable than increasing the count without recall.

## Problem workflow

1. Restate the problem and examples in your own words.
2. Write a brute-force approach before code.
3. State time and space complexity.
4. Implement without AI-generated code.
5. If blocked, request hints in this order:
   - clarify the invariant;
   - identify the useful data structure;
   - inspect one failing example;
   - review code already written.
6. After acceptance, ask for code review and compare one alternative.
7. Re-solve from a blank file on day 3 or day 7.

## Public record

Commit only your own implementation and explanation under `leetcode/`. In the weekly
study log, record the pattern, the key mistake, and whether the problem was solved
again from memory. Do not commit copied editorials or generated solutions.
