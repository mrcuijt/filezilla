
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "wx/xrc/xh_text.h"

wxClassInfo wxTextCtrlXmlHandler::ms_classInfo(NULL, NULL, NULL, 0, NULL);

wxTextCtrlXmlHandler::wxTextCtrlXmlHandler()
{
	FAIL("wxTextCtrlXmlHandler::wxTextCtrlXmlHandler");
}

wxClassInfo *wxTextCtrlXmlHandler::GetClassInfo() const
{
	FAIL("wxTextCtrlXmlHandler::GetClassInfo");
	return NULL;
}

wxObject *wxTextCtrlXmlHandler::DoCreateResource()
{
	FAIL("wxTextCtrlXmlHandler::DoCreateResource");
	return NULL;
}

bool wxTextCtrlXmlHandler::CanHandle(wxXmlNode *node)
{
	FAIL("wxTextCtrlXmlHandler::CanHandle");
	return true;
}