// TempConversion.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "TempConversion.h"


// This is an example of an exported variable
TEMPCONVERSION_API int nTempConversion=0;

// This is an example of an exported function.
TEMPCONVERSION_API int fnTempConversion(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CTempConversion::CTempConversion()
{
    return;
}

double CTempConversion::FarhToCelsius(double temp)
{
	return (temp - 32.0) * 5.0/9.0;
}

double CTempConversion::CelsiusToFarh(double temp)
{
	return (temp * (5.0/9.0)) + 32;
}
