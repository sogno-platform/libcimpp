#ifndef VsCapabilityCurve_H
#define VsCapabilityCurve_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Curve.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class VsConverter;

	/*
	The P-Q capability curve for a voltage source converter, with P on x-axis and Qmin and Qmax on y1-axis and y2-axis.
	*/
	class VsCapabilityCurve : public Curve
	{
	public:
		/* constructor initialising all attributes to null */
		VsCapabilityCurve();
		~VsCapabilityCurve() override;

		std::list<CIMPP::VsConverter*> VsConverterDCSides;  /* Capability curve of this converter. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VsCapabilityCurve_factory();
}
#endif
