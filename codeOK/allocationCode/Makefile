start: freeStruct.o mmapStruct.o smallestChunkAndTop.o testTcachemax.o mallocStruct.o

freeStruct.o: freeStruct.c
        @gcc freeStruct.c -o freeStruct.o

mmapStruct.o: mmapStruct.c
        @gcc mmapStruct.c -o mmapStruct.o

smallestChunkAndTop.o: smallestChunkAndTop.c
        @gcc smallestChunkAndTop.c -o smallestChunkAndTop.o

testTcachemax.o: testTcachemax.c
        @gcc testTcachemax.c -o testTcachemax.o

mallocStruct.o: mallocStruct.c
        @gcc mallocStruct.c -o mallocStruct.o

clean:
        @rm *.o