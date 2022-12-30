ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes

OLED_ENABLE = yes

# Enable per-key lighting
RGB_MATRIX_ENABLE = yes

# Enable audio keys and system control
EXTRAKEY_ENABLE = yes

# Enable link time optimization
# Trade longer compile time for smaller firmware size
LTO_ENABLE = yes


#MyAdditions
MUSIC_ENABLE = no
MAGIC_ENABLE = no

CAPS_WORD_ENABLE = yes
RGBLIGHT_ENABLE = no
MOUSEKEY_ENABLE = yes # Mouse keys
CONSOLE_ENABLE = no

AUTO_SHIFT_ENABLE = yes
# TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

OLED_ENABLE = no
RGB_MATRIX_ENABLE = no


# ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
#     SRC += tap_dances.c
# endif