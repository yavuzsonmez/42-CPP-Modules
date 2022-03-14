# Personal Notes: Learning Object Oriented Programming with C++ C98


## CPP_00

---

| Notion | Exemple | Notes | Description |
| ----------- | ----------- | ----------- | ----------- |
|Namespace | 	`namespace Foo{ ... };` | | <a href="https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170#:~:text=A%20namespace%20is%20a%20declarative,code%20base%20includes%20multiple%20libraries.">Namespace</a> |
| Namespace aliasing| `namespace Bar = Foo;` | |
| Scope resolution operator | `Foo::f(); Foo::var;` | | <a href="https://www.geeksforgeeks.org/scope-resolution-operator-in-c/">SR OP</a>|
| SR for global | `::var;`| |
| Standard Namespace | `std::;`| |
| STDOUT  | `std::cout << "Hello World !" << std:endl;` | | <a href="https://www.cplusplus.com/reference/iostream/">CPP.com</a>|
| STDIN | `std::cin >> buff;` | |
| Class | `class Sample { };` |  |  |
| Instance constructor | `Sample( );`| return nothing |  |
| Instance destructor | `~Sample( );`| return nothing |  |
| Member attributes and member function| `instance.f() or instance.var` | |
| This | `this->var` | pointer on current instance | |
| Initialization List | `Sample::Sample(char c, int i):var(c), var2(i){}` | initialize class instance var when the instane is created instead of inside the constructor with this| |
| Const var | `float const pi; Sample( float const f)` | `Sample::Sample(float const f):pi(f) {}`| |
| Const fct | `void bar (void) const;` | if a member function does not modify the class' instance, declare it as a const. Then `this->var = 0;` will not be possible. Read only instance | |
| Visibility | `public: private:` | private member attributes or private member functions can be assigned / called only from a instance of the class | |
| Class vs Struct | `Class Sample or struct Sample` | structure scope is public by default and class scope is private by default | |
| Accessors | `int getFoo(void) const; or void setFoo(int i);` | get function or set function to read-onlly (that's why const) or set a private member attribute from outside the class instance | |
| Comparisons | `public -> bool Sample::compare (Sample *other) const;` | compare if the instance "other" is structurally the same as the current one |
| | `if (&instance1 == &instance2) == true` | structural comparison | |
| | `if (instance1.compare(&instance2) == true` | physical comparison | |
| Non Member attributes | `private: static int _i;` | Declared as static; unique for all the instancces of the classe, ex: counter of number o instance | |
| Initialize a non member attribute | `int Sample::i = 0` | initialized outside of a function |
|  Non member functions | `static int getI(void)`  and `return Sample::i`| | Declared as static; contrary to member functions, a pointer to the instance is not passed, so we can't used this inside non member function. A static member function can access only the non member (with scope resolution operator) |
| Pointer ont instance | `Sample *p_instance = &instance` | | |
| Pointer on class member attribute | declare `int Sample::*p = NULL;` assign `p = &Sample::foo;` (here it's the exact pointed member is still not defined between the instance) so to use it `instance.*p = 21` or `p_instance->*p = 42`| pointer on int on Sample class member | |
| Pointer on class member function | declare `void (Sample::*f)(void) const;` assign `f = &Sample::bar` same as above so to use it `(instance.*f)()` or `(p_instance->*f)()` | pointer on const Sample class function which takes void as parameter and return void | |


---

## CPP_01

---