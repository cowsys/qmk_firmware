.PHONY: edit-xbow
edit-xbow:
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

.PHONY: build-xbow
build-xbow:
	qmk compile -kb xbows/knight_plus -km default

.PHONY: flash-xbow
flash-xbows: build-xbow
	qmk flash -kb xbows/knight_plus -km default

.PHONY: edit-ed
edit-ed:
	nvim -c 'call clang_format#disable_auto_format()' "./keyboards/omkbd/ergodash/rev1/keymaps/default/keymap.c"

.PHONY: cd-ed
cd-ed:
	cd ./keyboards/omkbd/ergodash/rev1/keymaps/default

.PHONY: build-ed
build-ed:
	qmk compile -kb omkbd/ergodash/rev1 -km default

.PHONY: flash-ed
flash-ed:
	qmk flash -kb omkbd/ergodash/rev1 -km default
