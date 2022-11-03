/** 
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author F. de Sande
* @date 4 Jun 2020
* @brief The classical 'Hello World' first program in any language
*
* @see http://www.cplusplus.com/doc/tutorial/program_structure/
* @see http://cpp.sh/2dd
*/

#include <iostream>

int main() {
  char a;
  std::cin >> a;

  if (int(a) >= 97 & int(a) <= 122) { 
    std::cout << char(a - 32) << std::endl;
  } else {
    std::cout << char(a + 32) << std::endl;
  }
  return 0;
}
