#ifndef GroundingImpedance_H
#define GroundingImpedance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EarthFaultCompensator.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Reactance.hpp"

namespace CIMPP
{

	/*
	A fixed impedance device used for grounding.
	*/
	class GroundingImpedance : public EarthFaultCompensator
	{
	public:
		/* constructor initialising all attributes to null */
		GroundingImpedance();
		~GroundingImpedance() override;

		CIMPP::Reactance x;  /* Reactance of device. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* GroundingImpedance_factory();
}
#endif
