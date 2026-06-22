# Companion code

The implementation code for Volume 4 lives in two existing repositories rather
than being duplicated here.

## AgriEdge (ECE 501)
Repository: https://github.com/AlanP13/AgriEdge-AI-Edge

Plant-disease classifier: MobileNet transfer learning in TensorFlow/Keras,
OpenCV frame capture, trained on a 38-class plant-disease dataset and deployed
on an NVIDIA Jetson Nano. The training notebook produces the per-epoch accuracy
recorded in `../RESULTS.md` (final validation accuracy approximately 0.949).

## SensoryPi (ECE 442)
Repository: https://github.com/AlanP13/ECE442-IoT-and-Cyber-Physical-Systems

Raspberry Pi smart security system: motion detection and on-device facial
recognition with OpenCV, components coordinated over MQTT.

## Reproducibility
Record dependency versions, the dataset split, and the random seed in each
repository so the AgriEdge accuracy figures regenerate.
