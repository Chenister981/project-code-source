start: brkexample.o brkexamplecrash.o brkmmap.o mmapexample.o mmapexamplealign.o mmapsameaddress.o mmapthreshold.o toppad.o trim.o

brkexample.o: brkexample.c
        @gcc brkexample.c -o brkexample.o

brkexamplecrash.o: brkexamplecrash.c
        @gcc brkexamplecrash.c -o brkexamplecrash.o

brkmmap.o: brkmmap.c
        @gcc brkmmap.c -o brkmmap.o

mmapexample.o: mmapexample.c
        @gcc mmapexample.c -o mmapexample.o

mmapexamplealign.o: mmapexamplealign.c
        @gcc mmapexamplealign.c -o mmapexamplealign.o

mmapsameaddress.o: mmapsameaddress.c
        @gcc mmapsameaddress.c -o mmapsameaddress.o

mmapthreshold.o: mmapthreshold.c
        @gcc mmapthreshold.c -o mmapthreshold.o

toppad.o: toppad.c
        @gcc toppad.c -o toppad.o

trim.o: trim.c
        @gcc trim.c -o trim.o

clean:
        @rm *.o