# C++ Operator Precedence

 | Precedence | Operators                                                                 | Description                        | Associativity     |
|------------|---------------------------------------------------------------------------|------------------------------------|-------------------|
| 1          | `::`                                                                      | Scope resolution                   | Left-to-right     |
| 2          | `()`, `[]`, `.`, `->`, `++`, `--`                                          | Function call, array, member, postfix increment/decrement | Left-to-right |
| 3          | `++`, `--`, `+`, `-`, `!`, `~`, `*`, `&`, `sizeof`, `new`, `new[]`, `delete`, `delete[]` | Unary operators, memory operations | Right-to-left     |
| 4          | `.*`, `->*`                                                               | Pointer-to-member access           | Left-to-right     |
| 5          | `*`, `/`, `%`                                                             | Multiplication, division, modulo   | Left-to-right     |
| 6          | `+`, `-`                                                                  | Addition, subtraction              | Left-to-right     |
| 7          | `<<`, `>>`                                                                | Bitwise shift left/right           | Left-to-right     |
| 8          | `<`, `<=`, `>`, `>=`                                                      | Relational operators               | Left-to-right     |
| 9          | `==`, `!=`                                                                | Equality and inequality            | Left-to-right     |
| 10         | `&`                                                                       | Bitwise AND                        | Left-to-right     |
| 11         | `^`                                                                       | Bitwise XOR                        | Left-to-right     |
| 12         | `|`                                                                       | Bitwise OR                         | Left-to-right     |
| 13         | `&&`                                                                      | Logical AND                        | Left-to-right     |
| 14         | `||`                                                                      | Logical OR                         | Left-to-right     |
| 15         | `?:`                                                                      | Ternary conditional                | Right-to-left     |
| 16         | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=`          | Assignment and compound assignment | Right-to-left     |
| 17         | `throw`                                                                   | Throw exception                    | Right-to-left     |
| 18         | `,`                                                                       | Comma operator                     | Left-to-right     |
