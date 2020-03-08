#include <iostream>
#include <string>

using namespace std;

int a(31);
int b(50);
int c(60);

int *xPointer{0};
int *ptra{0};
int *ptrb{0};


int* showAdress(int value)
{
    cout << &value;
};

int& showValue(int value){
	xPointer = &value;
	return *xPointer;
}

int swap(int* ptr1, int* ptr2) {
	int foo;
	foo = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = foo;
}

int main(int argc, char *argv[]) {
	ptra = &a;
	ptrb = &b;

	cout << "L'adresse est : " << showAdress(a) << endl;
	cout << "La valeur est : " << showValue(a);
	return 0;
}
