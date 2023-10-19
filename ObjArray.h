#include <stdio.h>


typedef struct {
	int x, y, z;
}Obj;


Obj create_obj(int x, int y, int z)
{
	Obj temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}

void print_obj(Obj *a)
{	


	// printf("obj = %p \n", a);

	printf("obj x = %2d", a->x);
	printf(", y = %2d, z = %2d \n", a->y, a->z);

	return;
}

//array creation

void init_obj_array(Obj *a, int size)
{
	for (int i = 0; i < size; i++) {
		a[i] = create_obj(i + 2, i + 2, i + 2);
	}

	// printf("%ld\n", sizeof(a));


	return;
}

void print_obj_array(Obj *a, int size)
{
	for (int i = 0; i < size; i++) {
		print_obj(&(a[i]));

	}



	return;
}


