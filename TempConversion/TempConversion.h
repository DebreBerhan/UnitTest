// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the TEMPCONVERSION_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// TEMPCONVERSION_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TEMPCONVERSION_EXPORTS
#define TEMPCONVERSION_API __declspec(dllexport)
#else
#define TEMPCONVERSION_API __declspec(dllimport)
#endif

// This class is exported from the dll
class TEMPCONVERSION_API CTempConversion {
public:
	CTempConversion(void);
	// TODO: add your methods here.
	double FarhToCelsius(double temp);
	double CelsiusToFarh(double temp);

};

extern TEMPCONVERSION_API int nTempConversion;

TEMPCONVERSION_API int fnTempConversion(void);
