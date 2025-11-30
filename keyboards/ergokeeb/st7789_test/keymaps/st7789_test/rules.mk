# Enable ST7789 driver
ST7789_ENABLE = yes
QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_DRIVERS += st7789_spi

# Optional: reduce firmware size if needed
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = no
 s
# Include required Quantum Painter sources (avoids implicit declaration errors)
SRC += qp_spi.c \
       qp_st7789.c \
       lib/qp/src/qp.c \
       lib/qp/src/qp_geometric.c \
       lib/qp/src/qp_hsv.c \
       lib/qp/src/qp_image.c \
       lib/qp/src/qp_platform.c \
       lib/qp/src/qp_text.c