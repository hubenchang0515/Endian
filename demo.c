#include <stdio.h>
#include "endian.h"

int main()
{
	char memory[8];
	
	writeUint16InBigEndian(memory,UINT16_MAX);
	printf("%u\n",readUint16InBigEndian(memory));
	writeUint32InBigEndian(memory,UINT32_MAX);
	printf("%u\n",readUint32InBigEndian(memory));
	writeUint64InBigEndian(memory,UINT64_MAX);
	printf("%lu\n",readUint64InBigEndian(memory));
	
	writeInt16InBigEndian(memory,INT16_MIN);
	printf("%d\n",readInt16InBigEndian(memory));
	writeInt32InBigEndian(memory,INT32_MIN);
	printf("%d\n",readInt32InBigEndian(memory));
	writeInt64InBigEndian(memory,INT64_MIN);
	printf("%ld\n",readInt64InBigEndian(memory));
	
	writeUint16InLittleEndian(memory,UINT16_MAX);
	printf("%u\n",readUint16InLittleEndian(memory));
	writeUint32InLittleEndian(memory,UINT32_MAX);
	printf("%u\n",readUint32InLittleEndian(memory));
	writeUint64InLittleEndian(memory,UINT64_MAX);
	printf("%lu\n",readUint64InLittleEndian(memory));
	
	writeInt16InLittleEndian(memory,INT16_MIN);
	printf("%d\n",readInt16InLittleEndian(memory));
	writeInt32InLittleEndian(memory,INT32_MIN);
	printf("%d\n",readInt32InLittleEndian(memory));
	writeInt64InLittleEndian(memory,INT64_MIN);
	printf("%ld\n",readInt64InLittleEndian(memory));
}
