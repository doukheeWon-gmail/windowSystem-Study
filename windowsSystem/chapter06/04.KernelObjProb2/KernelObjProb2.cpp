#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, TCHAR** argv) {
	DWORD n = 0;
	while (n < 100) {
		for (DWORD i = 0; i < 10000; i++) {
			for (DWORD i = 0; i < 10000; i++);
		}
		_fputts(_T("KernelObjProb.exe\r\n"), stdout);
		n++;
	}
	return 0;
}