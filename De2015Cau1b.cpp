//Cài đặt cụ thể cách giải quyết
class A {
public:
A() { a = new int[3]; for ( int i = 0; i < 3; i++ ) a[i] = i + 1; }
~A() { delete[] a; }
private:
int *a;
};
void init( A &a ) {
			A b;
			a.~A();
			a = b;
		}
void main() {
A obj;
init( obj );
}