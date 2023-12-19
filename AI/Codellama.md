A large language model that can use text prompts to generate and discuss code.

```
ollama run codellama:34b ' '
```

```
ollama run codellama:34b '
As developed by openssl, implement AES encryption, which processes the following code in 32-byte units using Te0, Te1, Te2, and Te3, as a top C language expert. The functions in the code given below work well, so feel free to use them.
// AES Encrypt function

void AES_Encrypt(const u8* plaintext, const u8* key, u8* ciphertext) {
	u32 roundKey[ROUND_KEYS_SIZE / sizeof(u32)];
	u8 state[AES_BLOCK_SIZE];
	
	// Copy plaintext to state
	for (int i = 0; i < AES_BLOCK_SIZE; ++i)
		state[i] = plaintext[i];
	
	// Key expansion
	KeyExpansion(key, roundKey);
	// Initial round
	AddRoundKey(state, roundKey);
	// Main rounds
	for (int round = 1; round <= Nr; round++) {
		SubBytes(state);
		ShiftRows(state);
		if (round != Nr)
			MixColumns(state);
		AddRoundKey(state, roundKey + round * AES_BLOCK_SIZE / sizeof(u32));
	}

	// Copy state to ciphertext
	for (int i = 0; i < AES_BLOCK_SIZE; ++i)
		ciphertext[i] = state[i];
}
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