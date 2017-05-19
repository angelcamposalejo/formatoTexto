#include "stdafx.h"  //________________________________________ FormatoTexto.cpp
#include "FormatoTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	FormatoTexto app;
	return app.BeginDialog(IDI_FormatoTexto, hInstance);
}

void FormatoTexto::Window_Open(Win::Event& e)
{
	const double weigth = 123.000;
	wstring texto;
	Sys::Format(texto, L"%f", weigth);
	this->MessageBox(texto, L"Formato", MB_OK);
	Sys::Format(texto, L"%.2f", weigth);
	this->MessageBox(texto, L"Formato", MB_OK);
	Sys::Format(texto, L"%g", weigth);
	this->MessageBox(texto, L"Formato", MB_OK);
}

