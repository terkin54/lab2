.PHONY: run 

run: 
	cc -g -o Menu Menu.c index_first_even.c index_last_odd.c sum_before_even_and_after_odd.c sum_between_even_odd.c && ./Menu
clean:
	rm -f ./Menu