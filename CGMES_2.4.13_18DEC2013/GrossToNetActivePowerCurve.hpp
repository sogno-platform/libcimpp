#ifndef GrossToNetActivePowerCurve_H
#define GrossToNetActivePowerCurve_H
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
	class GeneratingUnit;

	/*
	Relationship between the generating unit's gross active power output on the X-axis (measured at the terminals of the machine(s)) and the generating unit's net active power output on the Y-axis (based on utility-defined measurements at the power station). Station service loads, when modeled, should be treated as non-conforming bus loads. There may be more than one curve, depending on the auxiliary equipment that is in service.
	*/
	class GrossToNetActivePowerCurve : public Curve
	{
	public:
		/* constructor initialising all attributes to null */
		GrossToNetActivePowerCurve();
		~GrossToNetActivePowerCurve() override;

		CIMPP::GeneratingUnit* GeneratingUnit;  /* A generating unit may have a gross active power to net active power curve, describing the losses and auxiliary power requirements of the unit. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GrossToNetActivePowerCurve_factory();
}
#endif
