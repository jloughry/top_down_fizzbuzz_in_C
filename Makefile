target=top_down_fizzbuzz
source=$(target).c

$(target): $(source) Makefile
	clang -Wall -Wextra -o $@ $<

.PHONY: clean vi

clean:
	rm -fv $(target) a.out

vi:
	vi $(source)

test: $(target)
	@echo "This should work:"
	./$(target) 15
	@echo "This should fail with a USAGE message:"
	-./$(target) 123 abc
	@echo "This should fail with an abort:"
	-./$(target) -6
