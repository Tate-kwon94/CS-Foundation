# Review kit

This directory contains AI-assisted review questions, runnable puzzles, and answer
keys. It is committed so the same review workflow is available after cloning the
repository on another computer. Generated material is labeled and kept separate from
the hand-written work that represents independent understanding.

## Study contract

1. Do not open an answer key before recording an attempt.
2. Predict program output before compiling or running it.
3. Explain every wrong answer in plain Korean, without copying the answer key.
4. Write concept notes and portfolio practice code yourself.
5. Never copy course assignments, challenge problems, or employer material here.

## Hand-written output

After finishing a review, create your own work under:

```text
cpp-fundamentals/
└── 01-memory-model/
    ├── notes.md
    ├── practice.cpp
    └── mistakes.md
```

Suggested responsibilities:

- `notes.md`: explain the concept from memory in your own words.
- `practice.cpp`: write a new example from scratch; do not copy a review puzzle.
- `mistakes.md`: record the mistaken mental model and the corrected one.

Add a short summary to `docs/study-log/YYYY-Wnn.md`. `attempts.md` may also be
committed so review progress syncs across computers, but its answers must be written
before checking the supplied key.

Compiled binaries and sanitizer output go to `.review/build/`, which remains ignored.

## First module

Start with [`cpp/01-memory-model/README.md`](cpp/01-memory-model/README.md).
