CC = g++
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: BankSw

# To create the executable file count we need the object files
# countwords.o, counter.o, and scanner.o:
#
BankSw:  Main.o Bank.o Account.o 
	$(CC) $(CFLAGS) -o Banksw Main.o Bank.o Account.o

# To create the object file countwords.o, we need the source
# files countwords.c, scanner.h, and counter.h:
#
Main.o:  ./src/Main.cpp  
	$(CC) $(CFLAGS) -c ./src/Main.cpp

# To create the object file counter.o, we need the source files
# counter.c and counter.h:
#
Bank.o:  ./src/Bank.cpp 
	$(CC) $(CFLAGS) -c ./src/Bank.cpp

# To create the object file scanner.o, we need the source files
# scanner.c and scanner.h:
#
Account.o:  ./src/Account.cpp  
	$(CC) $(CFLAGS) -c ./src/Account.cpp

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean: 
	$(RM) Banksw *.o *~
