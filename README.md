# From Sensors to On-Device Inference

### An Embedded-to-Edge-AI Reference Architecture

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.20784402.svg)](https://doi.org/10.5281/zenodo.20784402)
[![Paper License: CC BY 4.0](https://img.shields.io/badge/Paper-CC%20BY%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by/4.0/)
[![Code License: MIT](https://img.shields.io/badge/Code-MIT-blue.svg)](LICENSE)

Companion repository for **Volume 4 of 10** in the **Engineering-to-Research Monograph Series** by **Alan Biju Palayil**.

> Edge AI is not a smaller copy of cloud AI. It is a four-layer co-design problem (sensing, model, runtime, software), and its central engineering act is principled reduction: shrinking a model while preserving the accuracy and explainability a non-expert user needs to trust it.

---

## Contents

- [About this repository](#about-this-repository)
- [The monograph](#the-monograph)
- [Framework at a glance](#framework-at-a-glance)
- [Results](#results)
- [Repository structure](#repository-structure)
- [Companion code](#companion-code)
- [Figures](#figures)
- [How to cite](#how-to-cite)
- [The Engineering-to-Research series](#the-engineering-to-research-series)
- [License](#license)
- [Author](#author)
- [Acknowledgments](#acknowledgments)

---

## About this repository

This repository is the reproducible companion to the technical report *From Sensors to On-Device Inference: An Embedded-to-Edge-AI Reference Architecture*. It holds the published paper, the source figures, and pointers to the coursework-derived code behind the two built systems. The archival record of the paper lives on Zenodo with a permanent DOI.

The paper treats edge AI as a four-layer co-design stack and grounds the argument in two systems: AgriEdge (plant-disease detection on a Jetson Nano) and SensoryPi (cyber-physical security on a Raspberry Pi).

---

## The monograph

- **Title:** From Sensors to On-Device Inference: An Embedded-to-Edge-AI Reference Architecture
- **Series:** Engineering-to-Research Monograph Series, Volume 4 of 10
- **Type:** Technical report / research monograph
- **Version:** 1.0 (June 2026)
- **DOI:** [10.5281/zenodo.20784402](https://doi.org/10.5281/zenodo.20784402) (version 1.0)
- **Paper:** [`paper/06_Monograph_4_Embedded_to_Edge_AI_Reference_Architecture.pdf`](paper/06_Monograph_4_Embedded_to_Edge_AI_Reference_Architecture.pdf)

**Abstract.** The default mental model for machine learning, train a large model in the cloud and send data to it, breaks at the edge, where data originates on power-, memory-, and bandwidth-constrained devices that must often decide in real time and in the physical world. Moving inference onto those devices is a co-design problem across four layers, sensing, model, runtime and hardware, and software engineering. This report develops a reference architecture and grounds it in two built systems, AgriEdge and SensoryPi, arguing that the central engineering act of edge AI is principled reduction, shrinking models while preserving accuracy and the explainability a non-expert user needs.

---

## Framework at a glance

**Four-layer co-design stack:** sensing, model, runtime and hardware, software engineering, with principled reduction as the central act between model and runtime.

**Design Principle 1 (Principled Reduction).** The core engineering act of edge AI is reducing a model to fit a constrained budget while preserving both the accuracy and the explainability a non-expert user needs to trust and act on its decisions. Reduction that trades away trust is not a saving.

**Synthesized contributions.**

1. A four-layer embedded-to-edge-AI reference architecture.
2. The principled-reduction design principle.
3. Two contrasting case-study instantiations (AgriEdge, SensoryPi).
4. A bridge from edge explainability to AI governance.

---

## Results

AgriEdge (MobileNet-based CNN, 38 plant-disease classes, Jetson Nano):

| Epoch | Training accuracy | Validation accuracy |
|---|---|---|
| 1 | 0.877 | 0.910 |
| 5 | 0.954 | 0.949 |

Full per-epoch results are in [`RESULTS.md`](RESULTS.md).

---

## Repository structure

```text
embedded-to-edge-ai-reference-architecture-vol4/
├── README.md
├── LICENSE                      # MIT, applies to /code only
├── LICENSE-CC-BY-4.0.txt        # CC BY 4.0, applies to /paper and /figures
├── CITATION.cff
├── RESULTS.md                   # quantitative metrics referenced by the paper
├── .zenodo.json                 # Zenodo deposit metadata (root-level name required)
├── paper/
│   ├── 06_Monograph_4_Embedded_to_Edge_AI_Reference_Architecture.pdf
│   └── 06_Monograph_4_Embedded_to_Edge_AI_Reference_Architecture.docx
├── figures/
│   ├── vol4_fig1_edge_ai_architecture.svg / .png
│   ├── vol4_fig2_agriedge_pipeline.svg / .png
│   └── vol4_fig3_agriedge_accuracy.svg / .png
└── code/
    └── README.md                # pointers to the AgriEdge and SensoryPi repos
```

---

## Companion code

The implementation code lives in two existing repositories and is referenced from `code/README.md`:

- **AgriEdge** (https://github.com/AlanP13/AgriEdge-AI-Edge): the plant-disease classifier (MobileNet transfer learning, TensorFlow/Keras/OpenCV) and the training notebook that produces the accuracy results in `RESULTS.md`.
- **SensoryPi** (https://github.com/AlanP13/ECE442-IoT-and-Cyber-Physical-Systems): the Raspberry Pi security system (OpenCV facial recognition and motion detection over MQTT).

---

## Figures

1. **Figure 1, the four-layer reference architecture.**
2. **Figure 2, the AgriEdge sensor-fusion pipeline.**
3. **Figure 3, AgriEdge training and validation accuracy** (real per-epoch data).

Provided as editable SVG and rendered PNG.

---

## How to cite

A machine-readable [`CITATION.cff`](CITATION.cff) is included; GitHub renders a "Cite this repository" button from it. The DOI 10.5281/zenodo.20784402 is embedded in `CITATION.cff`, the paper, and the citation blocks below.

**IEEE.** A. B. Palayil, "From Sensors to On-Device Inference: An Embedded-to-Edge-AI Reference Architecture," Engineering-to-Research Monograph Series, vol. 4, 2026. doi: 10.5281/zenodo.20784402.

```bibtex
@techreport{palayil2026edge,
  author      = {Palayil, Alan Biju},
  title       = {From Sensors to On-Device Inference: An Embedded-to-Edge-AI Reference Architecture},
  institution = {Engineering-to-Research Monograph Series},
  number      = {Volume 4 of 10},
  year        = {2026},
  version     = {1.0},
  doi         = {10.5281/zenodo.20784402},
  url         = {https://doi.org/10.5281/zenodo.20784402}
}
```

---

## The Engineering-to-Research series

Volume 4 of a ten-volume program ending in explainable-AI governance. Published so far: Volume 1, Securing Connected Systems, [10.5281/zenodo.20733453](https://doi.org/10.5281/zenodo.20733453); Volume 7, Scalable Analytics for Enterprise Decisions, [10.5281/zenodo.20733992](https://doi.org/10.5281/zenodo.20733992).

| Vol | Title | Theme |
|----|----|----|
| 1 | Securing Connected Systems | Network and edge security |
| 2 | Computer Architecture for Security Engineers | Hardware security |
| 3 | Secure Systems Engineering | Secure coding and concurrency |
| 4 | Embedded-to-Edge-AI Reference Architecture | Edge AI |
| 5 | Teaching Offensive Security | Pedagogy and leadership |
| 6 | ERM and Cybersecurity Governance | Governance |
| 7 | Scalable Analytics for Enterprise Decisions | Big data |
| 8 | Data Mining for Financial Systems | Financial technology |
| 9 | Research Methods for Applied Computing | Methodology |
| 10 | From Embedded Systems to Explainable AI Governance | Synthesis capstone |

---

## License

- **Paper and figures** (`/paper`, `/figures`): CC BY 4.0. See `LICENSE-CC-BY-4.0.txt`.
- **Code** (`/code`): MIT. See `LICENSE`.

---

## Author

**Alan Biju Palayil**
Independent Researcher; Application Development Analyst, Financial Services; Doctoral Researcher, University of the Cumberlands.
ORCID: [0009-0004-8302-5090](https://orcid.org/0009-0004-8302-5090)
GitHub: [@AlanP13](https://github.com/AlanP13)

---

## Acknowledgments

The systems originated in coursework at the Illinois Institute of Technology: AI and Edge Computing (ECE 501, the AgriEdge project under Dr. Jafar Saniie), IoT and Cyber-Physical Systems (ECE 442, SensoryPi), and embedded and object-oriented software coursework (ECE 441, ECE 590). All synthesis, analysis, and writing are the author's own and were written from scratch for publication.
