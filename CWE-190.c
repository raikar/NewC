//CWE-190: Integer Overflow (8)

#include <stdio.h>
#include <stdlib.h>

struct EmployeeInfo //1K
{
	char name[10]; //10K
	int id[5]; //20K
	float salary; //4K

};
int main(int argc, char **argv) {
	struct EmployeeInfo *emp_ptr; /*struct containing img data, 10kB each*/
	int num_imgs;
	int num;

		//num_imgs = get_num_imgs();
	num_imgs = 100000000;  //Non-compliant
	//num = (int*)malloc(sizeof(EmployeeInfo)*num_imgs); //sizeof(EmployeeInfo)=36K
	num = (30*num_imgs); //Integer Overflow
	printf("value of num: %d",num);
	
	return 0;
}
