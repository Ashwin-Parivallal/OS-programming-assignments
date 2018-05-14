#include "types.h"
#include "fcntl.h"
#include "user.h"
#include "stat.h"

int main(int argc, char** argv){

	int fd = open("README", O_RDWR);

	char arr[1000];
	int n = read(fd, arr, 1000);

	printf(1, "%d bytes read from README\n", n);

	//printf(1, "%s\n", arr);

	int f = open("hello.txt", O_CREATE|O_RDWR|O_CHECKED);

	//printf(1, "fd of hello.txt is : %d\n", f);

	int r = write(f, arr, 1000);
	printf(1, "Num of written = %d\n", r);

	struct stat* ss = malloc(sizeof(*ss));
	stat("hello.txt", ss);

	printf(1, "Type : %d\nSize : %d\nChecksum: %d\n", ss->type, ss->size, ss->checksum);

	close(f);
	close(fd);
	//f = open("hello.txt", O_RDWR);
	


   exit();
}
