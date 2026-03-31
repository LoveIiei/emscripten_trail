#include <emscripten.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *g_content = NULL;

EMSCRIPTEN_KEEPALIVE
void process_file_content(const char *content) {
  if (g_content)
    free(g_content);
  g_content = strdup(content);
  printf("--------------------------------\n");
  printf("Read succeeded:\n%s\n-----------------------------\n", g_content);
}

EMSCRIPTEN_KEEPALIVE
const char *get_content() { return g_content ? g_content : ""; }

int main() {
  printf("File read/write demo. Use the buttons above.\n");
  return 0;
}
