# 🔐 C XOR Cipher Utility

A lightweight C application that encrypts and decrypts text strings using a single-byte XOR cipher algorithm. 🚀

## ✨ Features

- **🔐 XOR Encryption & Decryption:** Uses the symmetric bitwise XOR (`^`) operator to transform text data.
- **⚡ In-Place Modification:** Modifies character arrays directly in memory without allocating additional buffers.
- **🛠️ Lightweight & Portable:** Written in standard C with minimal dependencies (`stdio.h`, `stdlib.h`, `string.h`).

## 🧠 How It Works

The XOR cipher is a symmetric algorithm. Applying the exact same XOR operation twice with the same numeric key restores the original plaintext:

$$\text{Ciphertext} = \text{Plaintext} \oplus \text{Key}$$
$$\text{Plaintext} = \text{Ciphertext} \oplus \text{Key}$$

## 🚀 Getting Started

### 📋 Prerequisites

- A C compiler such as `gcc` or `clang`. 💻
- `make` utility (optional). ⚙️

### 🛠️ Compilation

Compile the source code using `gcc`:

```bash
gcc xor_decryptorC.c -o main
./main
