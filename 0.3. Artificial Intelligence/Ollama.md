---
sticker: emoji//1f999
---
- https://ollama.ai/
- https://ollama.ai/library

# Installation

```bash
curl https://ollama.ai/install.sh | sh
```

# MISTRAL Library

Instruct:

```
ollama run mistral
```

Text completion

```
ollama run mistral:text
```

Example:

```
curl -X POST http://localhost:11434/api/generate -d '{
  "model": "mistral",
  "prompt":"Here is a story about llamas eating grass"
 }'
```