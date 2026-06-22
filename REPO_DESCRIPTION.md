# GitHub repository description and setup

## Repository name
```
Embedded-to-Edge-AI-Reference-Architecture-Vol4
```

## Short description (the GitHub "About" field, keep under ~350 characters)
```
Companion repo for Volume 4 of the Engineering-to-Research monograph series: a four-layer reference architecture for edge AI, arguing that the core act is principled reduction (preserve accuracy and explainability). Grounded in AgriEdge (Jetson Nano plant-disease CNN, ~94.9% val acc) and SensoryPi. Paper (CC BY 4.0), figures, results. DOI pending.
```

## Alternative one-line description (even shorter)
```
A four-layer edge-AI reference architecture grounded in two built systems (AgriEdge, SensoryPi). Monograph Vol. 4 of 10.
```

## Website field
Set to the Zenodo DOI URL once minted:
```
https://doi.org/10.5281/zenodo.20784402
```

## Suggested topics
```
edge-ai, tinyml, on-device-inference, embedded-systems, cyber-physical-systems,
convolutional-neural-networks, mobilenet, model-compression, explainable-ai,
jetson-nano, raspberry-pi, research-monograph, zenodo, reproducible-research
```

## First-release checklist
1. Push all files (README.md, LICENSE, LICENSE-CC-BY-4.0.txt, CITATION.cff, RESULTS.md, .zenodo.json, paper/, figures/, code/).
2. Set the About description and topics above.
3. DOI 10.5281/zenodo.20784402 is reserved and already embedded in README.md, CITATION.cff, LICENSE-CC-BY-4.0.txt, and the paper PDF/DOCX.
4. Create a GitHub release tagged `v1.0`.
5. Add the DOI to your portfolio Publications page and the Publication Status Ledger.

## Note on .zenodo.json
Copy `vol4_zenodo_metadata.json` from the archive into the repo root and rename it exactly `.zenodo.json`. Zenodo reads metadata in this priority order: `.zenodo.json` first, then `CITATION.cff`, then `LICENSE`.

## Publishing reminder
Publish on Zenodo into your "Engineering-to-Research Monograph Series" community, the same community used for Volumes 1 and 7. The companion code already lives in the AgriEdge-AI-Edge and ECE442-IoT-and-Cyber-Physical-Systems repositories; link them from this repo's code/README.md.
