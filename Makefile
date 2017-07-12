CFLAGS=-Wall -g

clean:
	rm -f WhileLoop
	rm -f IfElse
	rm -f Switch

while:	WhileLoop
	make WhileLoop

If: IfElse
	make IfElse

switch: Switch 
	make Switch