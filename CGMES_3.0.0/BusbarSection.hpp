#ifndef BusbarSection_H
#define BusbarSection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Connector.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{

	/** \brief A conductor, or group of conductors, with negligible impedance, that serve to connect other conducting equipment within a single substation.  Voltage measurements are typically obtained from voltage transformers that are connected to busbar sections. A bus bar section may have many physical terminals but for analysis is modelled with exactly one logical terminal. */
	class BusbarSection : public Connector
	{
	public:
		/* constructor initialising all attributes to null */
		BusbarSection();
		~BusbarSection() override;

		/** \brief Maximum allowable peak short-circuit current of busbar (Ipmax in IEC 60909-0).  Mechanical limit of the busbar in the substation itself. Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::CurrentFlow ipMax;

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

	BaseClass* BusbarSection_factory();
}
#endif
