#include <iostream>

using namespace std;


struct Test {
	int a;
	int b;
	string msg;
};

void addOne(int n);
void addOne2(int *n);
void changeStruct(Test *t);
void changeStruct2(Test *t);

int main(int argc, char const *argv[]) {
	
	int a = 10;
	Test t1;
	
	addOne(a);

	cout << endl;
	cout << "Result after invocation addOne() method: " << a << endl;

	addOne2(&a);

	cout << endl;
	cout << "Result after invocation addOne2() method: " << a << endl;


	t1.a = 10;
	t1.b = 20;
	t1.msg = "I am a C/C++ Developer ...";

	cout << " before changeStruct2() method invocation: " << t1.a << " - " << t1.b << " - " << t1.msg << endl;

	changeStruct2(&t1);

	cout << " after changeStruct2() method invocation: " << t1.a << " - " << t1.b << " - " << t1.msg << endl;




	return EXIT_SUCCESS;
}

void addOne(int n) {
	n++;
}

void addOne2(int *n) {
	(*n)++;
}

void changeStruct(Test *t) {
	(*t).a = 110;
	(*t).b = 220;
	(*t).msg = "In the near future I will be a C/C++ and Assembly Programmer ...";
}

void changeStruct2(Test *t) {
	t->a = 110;
	t->b = 220;
	t->msg = "In the near future I will be a C/C++ and Assembly Programmer ...";
}