#include "ObjArray.h"

#define SIZE 5
int main(void)
{
	

	Obj arr[SIZE];
	init_obj_array(&arr, SIZE);
	print_obj_array(&arr, SIZE);

	return 0;
}
