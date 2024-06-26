#define true 1
#define false 0

#include <stddef.h>
#include <stdint.h>

enum vgaColor {
    VGA_COLOR_BLACK = 0,
    VGA_COLOR_BLUE = 1,
    VGA_COLOR_GREEN = 2,
    VGA_COLOR_CYAN = 3,
    VGA_COLOR_RED = 4,
    VGA_COLOR_MAGENTA = 5,
    VGA_COLOR_BROWN = 6,
    VGA_COLOR_LIGHT_GREY = 7,
    VGA_COLOR_DARK_GREY = 8,
    VGA_COLOR_LIGHT_BLUE = 9,
    VGA_COLOR_LIGHT_GREEN = 10,
    VGA_COLOR_LIGHT_CYAN = 11,
    VGA_COLOR_LIGHT_RED = 12,
    VGA_COLOR_LIGHT_MAGENTA = 13,
    VGA_COLOR_LIGHT_BROWN = 14,
    VGA_COLOR_WHITE = 15
} typedef vgaColor;

struct Terminal {
    size_t row;
    size_t column;
    size_t VGA_WIDTH;
    size_t VGA_HEIGHT;
    uint16_t *buffer;
    uint8_t color;
} typedef Terminal;

size_t strlen (const char* string);

void terminalInitialize(Terminal* terminal, size_t VGA_WIDTH, size_t VGA_HEIGHT);
void terminalSetColor(Terminal* terminal, uint8_t color);
void terminalPutEntryAt(Terminal *terminal, char c, uint8_t color, size_t x, size_t y);
void terminalPutChar (Terminal* terminal, char c);
void terminalWrite(Terminal *terminal, const char *data, size_t size);
void terminalWriteString(Terminal *terminal, const char *data);
void terminalClear(Terminal *terminal);