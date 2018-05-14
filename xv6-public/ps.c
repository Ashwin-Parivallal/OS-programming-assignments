#include "types.h"
#include "fcntl.h"
#include "user.h"
#include "stat.h"
#include "procinfo.h"

int main(int argc, char** argv){

	struct procinfo p;
	char* state;
	//p = malloc(sizeof(p));
	/*for(int i = 0; i < NPROC; i++){
		p.name[i] = (char*)malloc(16*sizeof(char));
	}*/
    ps(&p);
	printf(1, "*--------------\nname \t pid\n--------------*\n");
	for( int i = 0; i < NPROC; i++ ){
		if(p.inuse[i]){
			switch(p.state[i]){
				case 2:{ state = "SLEEPING"; break; }
				case 3:{ state = "RUNNABLE"; break; }
				case 4:{ state = "RUNNING"; break; }
			}
			printf(1, "%s    %d       %s    %d\n",p.name[i],  p.pid[i], state, p.priority[i]);
		}
	}
    exit();
}
