# Personal Notes: Learning Object Oriented Programming with C++ C98

*42 intranet video well resumed*
https://github.com/qingqingqingli/CPP/

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
| Initialization List | | | |
| Const var | `float cont pi; Sample( float const f)` | | |
| Const fct | `void bar (void) const;` | if a member function does not modify the class' instance, declare it as a const. Then `this->var = 0;` will not be possible. Read only instance | |

- Initialization List
- Const
- Visibility
- Class vs Struct
- Accessors
- Comparisons
- Non Member attributes and Non member functions
- Pointers to Members

---

## CPP_01

---