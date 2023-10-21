#include <stdio.h>


typedef struct {
	int x, y, z;
}Obj;


//obj creation 
Obj create_obj(int x, int y, int z)
{
	Obj temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}

void update_obj_values(Obj *a, int x, int y ,int z)
{
	a->x = x;
	a->y = y;
	a->z = z;

	return;
}

//print function for printing the Obj struc
void print_obj(Obj *a)
{	
	printf("obj (x : %2d, y : %2d, z : %2d)\n", a->x, a->y, a->z);
	return;
}


//array creation

//initialize the Obj array
void init_obj_array(Obj *a, int size)
{
	for (int i = 0; i < size; i++) {
		update_obj_values(&(a[i]), 0, 0, 0);
	}

	return;
}

//print function for Obj Arrays
void print_obj_array(Obj *a, int size)
{
	for (int i = 0; i < size; i++) {
		print_obj(&(a[i]));

	}

	return;
}


