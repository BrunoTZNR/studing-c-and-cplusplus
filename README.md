# Comandos

## C
#### output data
```c
# put a string on console, this is the more fastesd but without manipulation in the variables.
puts("Olá mundo!");

# put a string on console, with manipulation in the variables, but a slowly than (puts).
printf("Olá mundo!");
```
#### input data
```c
# scanf use to read input of any datatype.
scanf(%s, &name);

# gets it is used only for string input.
gets(name);
```

<hr>

#### output data
In c++ can use:

```c++
#include <iostream>

using namespace std;

int main () {
    cout << "Hello World" << endl;

    system("pause");
    return 0;
}
```

instead of:

```c++
#include <iostream>

int main () {
    std::cout << "Hello World" << std::endl;

    system("pause");
    return 0;
}
```
<hr>

#### inpudata

```c++
#include <iostream>
#include <string>

int main () {
    string name;
    
    std::cout << "Your name: " << std::endl;
    std::cin << name;
    
    system("pause");
    return 0;
}
```
<hr>

#### type of variables

```c++
int number; //(... -1, 0, 1 ...)
float fractionalNumber; //(... -3.1415, 0, 3.1415 ...)
char letter; //'a'
double decimal; // (2.4999999) -  more presicion than float
float decimal2; // (2.5)
bool live; // true or false
string name; //"Bruno"
```
<hr>

#### define (constants)

```c++
#include <iostream>
#include <string>

#define pi 3.1415
#define salutation std::cout << "Hello world!" << std::endl;

int main () {
    std::cout << pi << std::endl;
    salutation
    
    system("pause");
    return 0;
}
```
<hr>

#### if and else

```c++
# if-else conditional
if (true) {
    std::cout << "true!" << std::endl;
} else if (false) {
    std::cout << "false!" << std::endl;
} else {
    std::cout << "invalid!" << std::endl;
}
```
<hr>

#### switch

```c++
# switch case in months
switch (/* days of the week */) {
    case 0:
        std::cout << "Sunday" << std::endl;
    break;
    case 1:
        std::cout << "Monday" << std::endl;
    break;
    case 2:
        std::cout << "Tuesday" << std::endl;
    break;
    case 3:
        std::cout << "Wednesday" << std::endl;
    break;
    case 4:
        std::cout << "Thursday" << std::endl;
    break;
    case 5
        std::cout << "Friday" << std::endl;
    break;
    case 6
        std::cout << "Saturday" << std::endl;
    break;
    default:
        std::cout << "invalid day!" << std::endl;
}
```
<hr>

#### loopings

```c++
# for
for (int i=0 ; i<=10 ; i++) {
    std::cout << i << std::endl;
}
```

```c++
# while - (int j=0)
while (j<10) {
    std::cout << j << std::endl;
    j++;
}
```

```c++
# do while - (int k=0)
do{
    std::cout << k << std::endl;
    k++;
} while (k<10);
```
<hr>

#### Arrays

```c++
# declarate a array:
int variableName[length of array] = {values...};

# shows a array lenght:
std::cout << sizeof(variableName) << std::endl;
```
