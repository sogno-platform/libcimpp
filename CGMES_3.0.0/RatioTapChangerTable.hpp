#ifndef RatioTapChangerTable_H
#define RatioTapChangerTable_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class RatioTapChanger;
	class RatioTapChangerTablePoint;

	/** \brief Describes a curve for how the voltage magnitude and impedance varies with the tap step. */
	class RatioTapChangerTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		RatioTapChangerTable();
		~RatioTapChangerTable() override;

		/** \brief The ratio tap changer of this tap ratio table. Default: 0 */
		std::list<CIMPP::RatioTapChanger*> RatioTapChanger;

		/** \brief Points of this table. Default: 0 */
		std::list<CIMPP::RatioTapChangerTablePoint*> RatioTapChangerTablePoint;

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

	BaseClass* RatioTapChangerTable_factory();
}
#endif
