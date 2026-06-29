# 🏊‍♂️ Piscine Survival Guide (1337 / 42 Network)

Welcome to the **Piscine Survival Guide**. This repository is my comprehensive, structured codebase and personal knowledge graph as I prepare for the 2026 C Piscine at 1337 (42 Network). 

The goal of this repository is not just to store code, but to provide a complete, standalone resource for understanding C programming fundamentals, memory management, and algorithmic logic under the strict constraints of the "Norminette."

## 📂 Repository Structure

To respect the strict submission rules of the Moulinette while maintaining a clean local testing environment, this repository uses the following architecture:

<pre>
piscine-survival-guide/
├── 00_Notes/               # Zettelkasten-style notes on C, pointers, and memory
├── 01_Testing_Mains/       # Custom main.c files to test functions locally
├── C00/                    # Core Module 00
│   ├── C00_Subject.pdf     # Official project instructions
│   ├── ex00/               # Exercise folder (ready for submission)
│   │   └── ft_putchar.c    # Norm-compliant source code
│   └── ex01/               
├── C13/                    # Advanced Module (Binary Trees)
│   ├── C13_Subject.pdf     
│   ├── ex00/               
│   │   ├── btree_create_node.c 
│   │   └── ft_btree.h      
└── README.md
</pre>

## 🛠️ Development Setup & Workflow

This repository is optimized for speed and terminal-based productivity. My core development environment consists of:

* **OS:** Linux Mint (Cinnamon), ensuring native Unix compatibility for memory management and system calls.
* **Editor:** Neovim, heavily customized for C development. I use real-time Norminette linting to ensure every single line complies with the 42 Norm (no functions over 25 lines, strict variable limits, etc.) before compilation.
* **Knowledge Management:** The `00_Notes/` directory is designed to be opened as an Obsidian vault. I use it to map out complex concepts—like pointer arithmetic and recursive tree traversals—before writing the code.
* **Testing:** Functions are isolated in their `ex` directories and tested against the `main.c` files in `01_Testing_Mains/` using local Makefiles.

## 🚀 How to Use / Test Locally

If you are a fellow Piscineer or just learning C, you can clone this repo and test the functions yourself. 

1. **Clone the repository:**
   \`\`\`bash
   git clone https://github.com/YourUsername/piscine-survival-guide.git
   cd piscine-survival-guide
   \`\`\`
2. **Compile a function with a test main:**
   *(Example for C00 - ex00)*
   \`\`\`bash
   gcc -Wall -Wextra -Werror C00/ex00/ft_putchar.c 01_Testing_Mains/main_C00.c -o test_c00
   ./test_c00
   \`\`\`

## ⚠️ Disclaimer

If you are currently participating in a 42 Piscine, **do not copy and paste this code**. The Moulinette will flag you for cheating (-42). This repository is meant to be a learning resource and a reference for understanding concepts. The Piscine is about building resilience and learning how to learn—struggling through the segmentation faults is part of the process!

## 📫 Contact

Feel free to reach me on [LinkedIn](https://www.linkedin.com/in/othmanbenyahya/) for questions or collaboration opportunities.

