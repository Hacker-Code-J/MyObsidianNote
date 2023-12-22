A large language model that can use text prompts to generate and discuss code.

```
ollama run codellama:34b ' '
```

```
ollama run codellama:34b '
Please write a C program to efficiently determine the minimum j for each ai in a sequence of positive integers, where j≠i, and the minimum number of operations to transform ai into aj is minimal. Use BFS or Dijkstra's algorithm to find the closest node from startNode

Problem Statement:
We consider the distance between positive integers in this problem, defined as follows. A single operation consists of either multiplying a given number by a prime number or dividing it by a prime number (if it does divide without a remainder). The distance between two numbers a and b, denoted d(a, b), is the minimum number of operations it takes to transform number a into number b. For example, d(69, 42) = 3. Observe that the function d is indeed a distance function, satisfying the properties:
1. d(a, a) = 0 for any positive integer a.
2. d(a, b) = d(b, a) for any positive integers a and b.
3. d(a, b) + d(b, c) ≥ d(a, c) for any positive integers a, b, and c.

Input:
- The first line of standard input contains a single integer n (2 ≤ n ≤ 100,000).
- The following n lines contain positive integers a1, a2, ..., an (1 ≤ ai ≤ 1,000,000), one per line.

Output:
- Your program should print exactly n lines to the standard output, each line containing a single integer j.
- The i-th line should give the minimum j such that: 1 ≤ j ≤ n, j ≠ i, and d(ai, aj) is minimal.

Example Input:
5
6
1
2
3
4
5

Example Output:
1
2
1
1
2
'
```
## Overview

Code Llama is a model for generating and discussing code, built on top of [Llama 2](https://ollama.ai/library/llama2). It’s designed to make workflows faster and efficient for developers and make it easier for people to learn how to code. It can generate both code and natural language about code. Code Llama supports many of the most popular programming languages used today, including Python, C++, Java, PHP, Typescript (Javascript), C#, Bash and more.

## Usage

### CLI

```
ollama run codellama "Write me a function that outputs the fibonacci sequence"
```

### API

```
curl -X POST http://localhost:11434/api/generate -d '{
  "model": "codellama",
  "prompt": "Write me a function that outputs the fibonacci sequence"
}'
```

## Parameter counts

|Parameter Count|Recommended memory|||
|---|---|---|---|
|7 billion|8GB|[View](https://ollama.ai/library/codellama:7b)|`ollama run codellama:7b`|
|13 billion|16GB|[View](https://ollama.ai/library/codellama:13b)|`ollama run codellama:13b`|
|34 billion|32GB|[View](https://ollama.ai/library/codellama:34b)|`ollama run codellama:34b`|

## Variations

|||
|---|---|
|`instruct`|Fine-tuned to generate helpful and safe answers in natural language|
|`python`|A specialized variation of Code Llama further fine-tuned on 100B tokens of Python code|
|`code`|Base model for code completion|

## Example prompts

### Ask questions

```
ollama run codellama:7b-instruct 'You are an expert programmer that writes simple, concise code and explanations. Write a python function to generate the nth fibonacci number.'
```

### Fill-in-the-middle (FIM) or infill

```
ollama run codellama:7b-code '<PRE> def compute_gcd(x, y): <SUF>return result <MID>'
```

Fill-in-the-middle (FIM) is a special prompt format supported by the code completion model can complete code between two already written code blocks. Code Llama expects a specific format for infilling code:

```
<PRE> {prefix} <SUF>{suffix} <MID>
```

`<PRE>`, `<SUF>` and `<MID>` are special tokens that guide the model.

### Code review

```
ollama run codellama '
Where is the bug in this code?

def fib(n):
    if n <= 0:
        return n
    else:
        return fib(n-1) + fib(n-2)
'
```

### Writing tests

```
ollama run codellama "write a unit test for this function: $(cat example.py)"
```

### Code completion

```
ollama run codellama:7b-code '# A simple python function to remove whitespace from a string:'
```