# Comandos

```c
# put a string on console, this is the more fastesd but without manipulation in the variables.
puts("Olá mundo!");

# put a string on console, with manipulation in the variables, but a slowly than 'puts()'.
printf("Olá mundo!");
```

In c++ can use:

```c++
#include <iostream>

using namespace std;

int main () {

    cout << "Hello World" << endl;

    return 0;

}
```

instead of:

```c++
#include <iostream>

int main () {

    std::cout << "Hello World" << std::endl;

    return 0;

}
```