#ifndef EquivalentShunt_H
#define EquivalentShunt_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EquivalentEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Conductance.hpp"
#include "Susceptance.hpp"

namespace CIMPP
{

	/*
	The class represents equivalent shunts.
	*/
	class EquivalentShunt : public EquivalentEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EquivalentShunt();
		~EquivalentShunt() override;

		CIMPP::Susceptance b;  /* Positive sequence shunt susceptance. Default: nullptr */
		CIMPP::Conductance g;  /* Positive sequence shunt conductance. Default: nullptr */

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

	BaseClass* EquivalentShunt_factory();
}
#endif
