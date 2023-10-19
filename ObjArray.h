#include <stdio.h>


typedef struct {
	int x, y;
}Obj;


Obj create_obj(int x, int y)
{
	Obj temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

void print_obj(Obj *a)
{	


	// printf("obj = %d", a);

	printf("obj x = %2d", a->x);
	printf(", y = %2d\n", a->y);
	
	return;
}

//array creation

void init_obj_array(Obj *a, int size)
{
	int skip = 0;
	for (int i = 0; i < size; i++) {
		skip = i * (int) sizeof(a);
		a[skip]= create_obj(skip, skip);

	}

	// printf("%ld\n", sizeof(a));


	return;
}

void print_obj_array(Obj *a, int size)
{
	int skip = 0;
	for (int i = 0; i < size; i++) {
		skip = i * (int) sizeof(a);
		print_obj(&(a[skip]));

	}



	return;
}


