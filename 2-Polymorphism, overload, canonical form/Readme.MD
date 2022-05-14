## CPP_02

---

***Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form***

---

| Notion | Exemple | Notes | Description |
| ----------- | ----------- | ----------- | ----------- |
| AD-HOC Polymorphism / Function Overload | ```void bar(char const c) const; void bar(float const z) const; void bar(Sample const &i) const```| Allow to specialise a function depending of the parameters | Same function with same name but with different prototypes (different parameters) |
|  this default paramater |  |  | And pointer on the current instance of the class is always and automatically passed as first parameters of each member functions |
| Operator overload | ```Fixed & Fixed::operator=(Fixed const &rhs)```| | Replace the corresponding arithmetic operator by a function, allow arithmetic operator between objects |