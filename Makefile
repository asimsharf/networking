red = "\033[31m"
green = "\033[32m"
yellow = "\033[33m"
blue = "\033[34m"
magenta = "\033[35m"
cyan = "\033[36m"
white = "\033[37m"
reset = "\033[0m"

files = src/*.c
objects = $(files:.c=.o)
executable = bin/$(shell basename $(CURDIR))
output = $(executable).out
debug = $(executable).debug
gcc = gcc

all:
	@echo $(green)Compiling...$(reset)
	@$(gcc) $(files) -o $(output)
	@echo $(green)Done!$(reset)
	@make debug

debug:
	@echo $(green)Debuging...$(reset)
	@$(gcc) $(files) -o $(debug)
	@echo $(green)Done!$(reset)
	@make run

clean:
	@echo $(red)Cleaning...$(reset)
	@rm -f $(output) $(debug)
	@rm -f bin/*.out bin/*.debug bin/*.o
	@echo $(red)Done!$(reset)

run:
	@echo $(cyan)Running...$(reset)
	@./$(output)
	@echo $(cyan)Done!$(reset)

test:
	@echo $(cyan)Testing...$(reset)
	@./$(debug)
	@echo $(cyan)Done!$(reset)
