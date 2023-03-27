##
## EPITECH PROJECT, 2022
## makefile
## File description:
## rule for make command
##

CC := gcc
CFLAGS := -Wall -Wextra -U_FORTIFY_SOURCE
CFLAGS += -iquote ./include

BUILD_DIR := .build

NAME := loki
UNIT := unittests

VPATH :=                                                            \
	lib/uruz/mem                                                    \
    lib/uruz/arr                                                    \
    lib/uruz/str                                                    \
    lib/uruz/nbr                                                    \
    lib/uruz/display                                                \
    lib/ansuz

MAIN := main.c
SRC := $(MAIN)                                                      \
    \
    array_display.c                                                 \
    array_free.c     	                                            \
    array_len.c     	                                            \
    cal_power.c     	                                            \
    char_display.c     	                                            \
    display.c     	    	                                        \
    error_display.c     	                                        \
    float_display.c     	                                        \
    mem_calloc.c     	                                            \
    mem_cpy.c     	    	                                        \
    mem_realloc.c     	                                            \
    mem_set.c     	    	                                        \
    my_str_to_word_array.c                                          \
    nb_display.c     	                                            \
    nb_get.c     	    	                                        \
    str_concat.c     	                                            \
    str_copy_at.c     	                                            \
    str_display.c     	                                            \
    str_dup.c     	    	                                        \
    str_find_str.c     	                                            \
    str_get_from_float.c                                            \
    str_get_from_int.c     	                                        \
    str_index_of.c     	                                            \
    str_len.c     	    	                                        \
    str_ncmp.c     	    	                                        \
    str_rev.c     	    	                                        \
    str_split.c     	                                            \
    str_split_optimized.c                                           \
    \
    dec_to_bin.c     	                                            \
    dec_to_hex.c     	                                            \
    dec_to_oct.c     	                                            \
    flag_select.c     	                                            \
    my_get_nbr.c    	                                            \
    my_printf.c     	                                            \
    my_put_llnbr.c    	                                            \
    my_put_lnbr.c     	                                            \
    scientific_format.c

VPATH +=                                                            \
	test/                                                           \
    test/integration                                                \
    test/mocks                                                      \
    test/unit

TSRC :=                                                             \
	test_suite.c    	    	                                    \
    test_str_len.c

TSRC += $(filter-out $(MAIN),$(SRC))

OBJ := $(SRC:%.c=$(BUILD_DIR)/release/%.o)
OBJ_TEST := $(TSRC:%.c=$(BUILD_DIR)/test/%.o)

all: options $(NAME)

.PHONY: all

%:
	$(error "No such rule $@")

%.c:
	$(error "Missing file $@")

$(BUILD_DIR)/release/%.o: %.c
	@ mkdir -p $(@D)
	@ echo "  CC     	: $<"
	@ $(CC) -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJ)
	@ echo "  LD     	: $@"
	@ $(CC) -o $(NAME) $(OBJ) $(CFLAGS)

options:
	@ echo "  CC     	 : $(CC)"
	@ echo "  CFLAGS     : $(CFLAGS)"

.PHONY: options

clean:
	@ echo "  RM     	: $(BUILD_DIR)"
	@ $(RM) -r $(BUILD_DIR)

fclean: clean
	@ $(RM) $(NAME) $(UNIT)
	@ echo "  RM     	: $(NAME)"
	@ echo "  RM     	: $(UNIT)"

.PHONY: clean fclean

re: fclean all

.PHONY: re

debug: CFLAGS += -g
debug: re

.PHONY: debug

$(BUILD_DIR)/test/%.o: %.c
	@ mkdir -p $(BUILD_DIR)/test
	@ $(CC) $(CFLAGS) $(LIBFLAGS) -c $< -o $@

$(UNIT): CFLAGS += -g3 --coverage
$(UNIT): LDLIBS += -lcriterion
$(UNIT): LDFLAGS += -fprofile-arcs -ftest-coverage
$(UNIT): $(OBJ_TEST)
	@ $(CC) $(CFLAGS) -o $@ $^ $(LDLIBS) $(LDFLAGS)
	@ echo "Compiled $@"

test_run: $(UNIT)
	@ ./$(UNIT) -OP:F --full-stats

.PHONY: tests_run

cov: test_run
	@ gcovr . --exclude test

.PHONy: cov
