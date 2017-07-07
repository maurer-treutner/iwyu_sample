VERBOSE := 1
ifndef (VERBOSE)
  Q:=@
else
  Q:=
endif

PWD := $(shell pwd)
SOURCE_DIR := $(PWD)/src
BUILD_DIR := $(PWD)/build
BUILD_DIR_DEBUG := $(PWD)/build/debug
BUILD_DIR_RELEASE := $(PWD)/build/release

PATH := $(PATH):/usr/local/bin
GENERATOR := "Unix Makefiles"

# all: ext debug release
all: debug release

.PHONY: debug
debug:
	$(Q)mkdir -p "$(BUILD_DIR_DEBUG)"
	$(Q)cd "$(BUILD_DIR_DEBUG)" && cmake -G $(GENERATOR) -DCMAKE_BUILD_TYPE=DEBUG -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DINST_DIR="$(INST_DIR_DEBUG)" "$(SOURCE_DIR)"
#	iwyu_tool.py -v -p "$(BUILD_DIR_DEBUG)"
	$(Q)make -C $(BUILD_DIR_DEBUG) VERBOSE=1

.PHONY: release
release:
	$(Q)mkdir -p "$(BUILD_DIR_RELEASE)"
	$(Q)cd "$(BUILD_DIR_RELEASE)" && cmake -G $(GENERATOR) -DCMAKE_BUILD_TYPE=RELEASE -DINST_DIR="$(INST_DIR_RELEASE)" "$(SOURCE_DIR)"
	$(Q)make -C $(BUILD_DIR_RELEASE) VERBOSE=1

.PHONY: clean
clean:
	$(Q)rm -rf $(BUILD_DIR)
