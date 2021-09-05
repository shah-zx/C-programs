/*storage classes in c
decidse scope and lifetme of varialbe
scope is helpful to determine the portion of the prg whr var is access.
lifetime is period during execution of the program in which a variable exsts in mem.
types auto register static extern

auto :- 
default storage class for local var.
default value: - garbage
scope : limited to function
lifetime : lifetime of func in which te var is declared.

register:-
var is stored i cpu rather in memory
ex: - register int counter;
use for quick access
scope ang lt similar to auto
request to compilier may may not be granted

extern :-
used when var is defined outside the storage func
float pi = 3.14// declared before main()
defaut init val =0;
scope throughout the propgram
lifetime of the prg is the life

static :-\
static int count =0
var init when correspondng fuinc executs first time
var retains value accross the function calls.
lifetime is equal  ti the lt of the program
default val =0





