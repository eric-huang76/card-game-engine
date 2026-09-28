#include "engine.h"
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>



int main(){
	setlocale(LC_ALL, "");
	wchar_t spade = L'\u2660';
	wchar_t heart = L'\u2665';
	wchar_t diamond = L'\u2666';
	wchar_t club = L'\u2663';

	wprintf(L"Spade:	%lc\n", spade);
	wprintf(L"Heart:	%lc\n", heart);
	wprintf(L"Diamond:	%lc\n", diamond);
	wprintf(L"Club:	%lc\n", club);

	return 0;
}
