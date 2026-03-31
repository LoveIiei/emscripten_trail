#include <stdio.h>

// ANSI escape code helpers
#define RESET "\x1b[0m"
#define BOLD "\x1b[1m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define CYAN "\x1b[36m"

int main() {
  printf(BOLD GREEN "=== xterm.js + Emscripten ===" RESET "\n");
  printf("See the output rendered by xterm.js which will be used for nvim "
         "too.\n\n");

  printf(CYAN "ANSI colors:" RESET "\n");
  printf("  " RED "red" RESET "  " GREEN "green" RESET "  " YELLOW
         "yellow" RESET "  " CYAN "cyan" RESET "\n\n");

  printf(BOLD "Next steps toward Neovim on the web:" RESET "\n");
  printf("  1. Wire up stdin so keyboard input reaches C\n");
  printf("  2. Mount an IDBFS filesystem for persistence\n");
  printf("  3. Run Neovim's main loop inside the terminal\n");

  return 0;
}
