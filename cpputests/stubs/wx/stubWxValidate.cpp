
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "wx/validate.h"

const wxValidator wxDefaultValidator;

wxValidator::wxValidator()
{
	FAIL("wxValidator::wxValidator");
}

wxValidator::~wxValidator()
{
	FAIL("wxValidator::~wxValidator");
}

wxClassInfo *wxValidator::GetClassInfo() const
{
	FAIL("wxValidator::GetClassInfo");
	return NULL;
}