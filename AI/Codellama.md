A large language model that can use text prompts to generate and discuss code.

```
ollama run codellama:34b ' '
```

```
ollama run codellama:34b '
1. Start by creating a Manim scene with two rectangles representing the 
plaintext and ciphertext blocks. The plaintext block should be labeled 
"Plaintext" and the ciphertext block should be labeled "Ciphertext".
2. Next, add a key rectangle to represent the encryption key. This can be 
a simple black box with the word "Key" written on it.
3. Use Manim animation features to show how the plaintext block is 
transformed into the ciphertext block through a series of substitution and
permutation operations. For example, you could use arrows to indicate 
which letters are being replaced by others, or you could use a simple 
animation to show the blocks being mixed up and reshuffled.
4. To add an extra layer of complexity, you could also include a "round 
key" rectangle that is used to mix up the plaintext block even further. 
This can be represented as a separate black box with the word "Round Key" 
written on it.
5. Finally, use Manim text-to-speech features to explain the process in 
more detail. You could have the animation pause at certain points and 
provide explanations of what is happening at each step. For example, you 
could say something like "In this step, we are substituting the letter "e"
with the letter "a". This is done using a simple substitution cipher, 
where each letter is replaced by a letter that is a fixed number of 
positions down the alphabet.
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