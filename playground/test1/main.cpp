#include <iostream>
#include <type_traits>

void foo(char *);
void foo(int);

int main() {
  if (std::is_same<decltype(NULL), decltype(0)>::value)
    std::cout << "NULL == 0" << std::endl;
  if (std::is_same<decltype(NULL), decltype((void *)0)>::value)
    std::cout << "NULL == (void *)0" << std::endl;
  if (std::is_same<decltype(NULL), std::nullptr_t>::value)
    std::cout << "NULL == nullptr" << std::endl;

  std::cout << typeid(1.2).name() << std::endl;
  int a = 1;
  scanf("%d", &a);
  int arr[a];
  foo(0); // 调用 foo(int)
  // foo(NULL);    // 该行不能通过编译
  foo(nullptr); // 调用 foo(char*)
  return 0;
}

void foo(char *) { std::cout << "foo(char*) is called" << std::endl; }
void foo(int i) { std::cout << "foo(int) is called" << std::endl; }