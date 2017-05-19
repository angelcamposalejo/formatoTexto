#pragma once  //______________________________________ FormatoTexto.h  
#include "Resource.h"
class FormatoTexto: public Win::Dialog
{
public:
	FormatoTexto()
	{
	}
	~FormatoTexto()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"FormatoTexto";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
