# Industrial AI Projects (M4 — Portfolio)

Portfolio projects at the intersection of **plant/piping engineering and software** — the domain edge that generic CS grads don't have. All project docs in English (this is what Dubai recruiters will read).

## Planned projects

Each project gets its own folder with: `README.md` (problem → approach → architecture → results, with screenshots), source code, and sample data (anonymized/synthetic only — **no real site data, ever**).

| # | Project | Domain edge | Stack (planned) | Status |
|---|---|---|---|---|
| 1 | **Weld Inspection Analytics** — defect-rate dashboard from welding/NDE inspection logs | QC/QA workflow knowledge (CWI) | Python, pandas, Streamlit | idea |
| 2 | **Piping Material Takeoff Tool** — BOM aggregation & progress tracking from spool data | Piping engineering | Python, SQLite, FastAPI | idea |
| 3 | **Sensor Anomaly Detection** — time-series anomaly detection on public industrial dataset (e.g. NASA bearing, pump sensor data) | Mechanical integrity intuition (API 570) | Python, scikit-learn, AWS | idea |
| 4 | **Plant Doc RAG Assistant** (stretch) — Q&A over piping codes/specs excerpts | Knowing which questions engineers actually ask | LLM API, vector DB | idea |

## Project README template

```markdown
# Project Name
One-line: what it does and for whom.

## Problem
The real-world pain point (from site experience).

## Approach & Architecture
Diagram + key decisions and trade-offs.

## Results
Screenshots, metrics, what I'd do differently.

## Run it
Setup + usage.
```

## Rules

- Projects 1–2 can start earlier (late Phase 1–2) in simple script form, then be rebuilt properly in M4 — the evolution itself is portfolio material.
- Every project must be runnable by a stranger from the README alone.
