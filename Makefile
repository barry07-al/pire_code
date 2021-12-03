all : clean pireCode

pireCode :: pireCode.c
	cc -o pireCode pireCode.c

clean ::
	rm -r pireCode
