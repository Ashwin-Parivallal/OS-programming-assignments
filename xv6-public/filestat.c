#include "types.h"
#include "fcntl.h"
#include "user.h"
#include "stat.h"

int main(int argc, char** argv){

	struct stat* ss = malloc(sizeof(*ss));
	stat(argv[1], ss);
	printf(1, "Type : %d\nSize: %d\nChecksum Value: %d\n", ss->type, ss->size, ss->checksum);
   exit();
}
