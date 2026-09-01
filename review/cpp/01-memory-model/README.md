# C++ review 01: memory, pointers, and references

## Goal

Finish this module able to distinguish an object, its value, its address, a pointer
to it, and a reference to it. You should also be able to identify invalid lifetime
and ownership code before running it.

## Files

- `quiz.md`: closed-book concept recall.
- `trace-puzzles.cpp`: safe programs whose output must be predicted first.
- `bug-hunt.md`: unsafe snippets to diagnose without executing.
- `attempts.md`: your answers and review schedule, synchronized through Git.
- `answer-key.md`: open only after completing an attempt.

## First session

1. Close the lecture and all notes.
2. Answer Part A of `quiz.md` in `attempts.md`.
3. For puzzles 1-6, write the output and memory relationships before running them.
4. Run one puzzle at a time:

   ```bash
   review/bin/run-cpp-review 1
   ```

   The runner enables strict compiler warnings and UndefinedBehaviorSanitizer. The
   current Apple Clang AddressSanitizer runtime was deliberately left out because its
   instrumented binaries hang in this local environment; the unsafe examples in
   `bug-hunt.md` must therefore remain read-only exercises.

5. Diagnose every snippet in `bug-hunt.md` without compiling it.
6. Open `answer-key.md` and compare.
7. Record each wrong mental model in `attempts.md`.

## Spaced review

Repeat only the missed questions on day 1, day 3, day 7, and day 14. A review is
complete when you answer at least 80% correctly twice, at least three days apart.

## Public follow-up

After completing the review module, write a different example in the fundamentals area.
A safe domain-inspired idea is a synthetic `SensorReading` class that prints constructor
and destructor events. First use automatic storage, then compare it with
`std::unique_ptr`. Raw `new` and `delete` may be used once to demonstrate lifetime,
but should not be the final design.
