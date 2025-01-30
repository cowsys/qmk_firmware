.PHONY: edit-keymap
edit-keymap:
	nvim -c 'call clang_format#disable_auto_format()' "./keyboards/xbows/knight_plus/keymaps/default/keymap.c"

.PHONY: edit-led
edit-led:
	nvim -c 'call clang_format#disable_auto_format()' "./keyboards/xbows/knight_plus/knight_plus.c"

.PHONY: edit-rules
edit-rules:
	nvim -c 'call clang_format#disable_auto_format()' "./keyboards/xbows/knight_plus/rules.mk"

.PHONY: edit-config
edit-config:
	nvim -c 'call clang_format#disable_auto_format()' "./keyboards/xbows/knight_plus/config.h"

.PHONY: build-xbows
build-xbows:
	qmk compile -kb xbows/knight_plus -km default

.PHONY: flash-xbows
flash-xbows:
	qmk flash -kb xbows/knight_plus -km default
