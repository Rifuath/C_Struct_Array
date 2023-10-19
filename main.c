#include "ObjArray.h"

int main(void)
{

	Obj arr[5];
	init_obj_array(&arr, 5);
	print_obj_array(&arr, 5);

	return 0;
}
