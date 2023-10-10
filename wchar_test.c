#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main()
{
  wchar_t buffer[] = L"Hello World\n";
  setlocale(LC_CTYPE, "en_US.UTF-8");
  buffer[5] = 0x1F525;
  wprintf(L"%ls", buffer);
  return 0;
}
