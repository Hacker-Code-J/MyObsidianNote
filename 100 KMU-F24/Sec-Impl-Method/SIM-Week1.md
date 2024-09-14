---
title: Overview and 64-bit ARMv8 Programming Part 1 | Week1
date: 2024-09-13
instructor: SEO SEOGCHUNG
semester: Fall 2024
week: 1
key_concepts:
  - 
references:
  - 
tags: 
  - security-implementation-methodology
---

> [!abstract] **Objectives**
> - ARMv8 Programming
> - Computer Architecture
> 	- Operation of Computer Hardware
> 	- Pipelined Architecture
> 	- Memory Architecture
> - Hardware Implementation
> ---
> **Ability**:
> - Software Programming (64-bit ARMv8)
> - Understanding Hardware (CPU, Memory, CIrcuit, ARMv8, RISC-V)
> - Hardware Programming (HDL)

> [!info] **References**
> - ARM 64-bit Assembly Language
> 	- Larry D. Pyeatt
> - Computer Organization and Design (ARM edition)
> 	- David A. Patterson and John L. Hennessy
> - Design and Computer Architecture (RISC-V edition)
> 	- Sarah L. Harris and David Harris
> ---
> *My References*:
> - https://carstart.tistory.com/185



# 64-bit ARMv8 Programming Part 1 (feat. Raspberry Pi 4B)
## Table of Contents
1. [Terminology](#Terminology)
2. [Introduction](#Introduction)
3. [Defining Performance](#Defining-Performance)
4. [GNU Assembly Syntax](#GNU-Assembly-Syntax)

### Terminology
Here’s a table summarizing **NEON**, **Cortex**, **RISC**, and **MCU**:

| **Term**   | **Description**                                                                                                                                             |
| ---------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **NEON**   | *SIMD (Single Instruction, Multiple Data) extension for ARM architecture;* accelerates multimedia processing like audio, video, and machine learning tasks. |
| **Cortex** | *Family of processors developed by ARM*, with subtypes like Cortex-A (high performance), Cortex-R (real-time), and Cortex-M (microcontrollers).             |
| **RISC**   | *CPU architecture* that uses a reduced set of simple instructions, focusing on efficiency and faster execution.                                             |
| **MCU**    | *Complete system-on-chip* that includes a CPU (often based on RISC), memory, and peripherals designed for embedded systems and specific tasks.              |

This table captures each term and its respective role or concept in computing.
### Introduction
- ARMv8-A Arichtecture
	- High-performance RISC MCU
	- Supporting two architectures
		- AArch32: It provides compatibility with ARMv7
		- AArch64
	- Cortex-A72 (ARMv8-A)
		- Mounted on Raspberry Pi 4B
	- Cortex-A75 (ARMv8.2-A)
		- Mounted on Jetson Xavier Board
	- Cortex-A57 (ARMv8-A)
		- Mounted on Jetson Nano Board
- ARM Cortex-A72 Pipeline
	- Fetch -> Decode -> Execute -> Write-back
- Raspberry Pi 4B
	- Boardcom BCM2711
		- Quad core Cortex-A72 64-bit Soc@1.5GHz
		- 2GB, 4GB or 8GB LPDDR4-3200 SDRAM
	- Install `Ubuntu Linux 64-bit`
		- Install `Ubuntu Server 20.04.3 LTS`
		- Install `Ubuntu-desktop`

```bash
sudo apt-get update && sudo apt-get upgrade
sudo apt-get install Ubuntu-desktop
```

### Defining-Performance
### GNU-Assembly-Syntax














