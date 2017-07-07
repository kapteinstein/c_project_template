CC=gcc-6
OUTPUT_OPTION=-MMD -MP -o $@

CFLAGS += -Wall -Ofast --std=c99 -Wvla -I../include
MODULES := implementation
CFLAGS += $(patsubst %,-I%,$(MODULES))

LIBS :=
TEST :=
DEP_OBJ :=
include $(patsubst %,%/module.mk,$(MODULES))
SRC := $(patsubst %.test,%-test.c,$(filter %.test,$(TEST)))
OBJ := $(patsubst %.c,%.o,$(filter %.c,$(SRC)))
DEP := $(patsubst %.c,%.d,$(filter %.c,$(SRC)))

all: test

test: $(OBJ)
	@make -C ../src
	$(CC) -o test $(OBJ) $(DEP_OBJ) $(LIBS)

$(SRC) : $(TEST)
	checkmk $< > $@

-include $(DEP)

.PHONY: clean

clean:
	rm -f $(OBJ) $(DEP) $(SRC) test
	rm -rf *.dSYM
