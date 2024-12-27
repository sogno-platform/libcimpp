#ifndef WindProtectionIEC_H
#define WindProtectionIEC_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindTurbineType1or2IEC;
	class WindTurbineType3or4IEC;

	/*
	The grid protection model includes protection against over- and under-voltage, and against over- and under-frequency. Reference: IEC 61400-27-1:2015, 5.6.6.
	*/
	class WindProtectionIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindProtectionIEC();
		~WindProtectionIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this grid protection model. Default: 0 */
		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;  /* Wind generator type 1 or type 2 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind generator type 3 or type 4 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::PU dfimax;  /* Maximum rate of change of frequency (&lt;i&gt;dF&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU fover;  /* Wind turbine over frequency protection activation threshold (&lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;over&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU funder;  /* Wind turbine under frequency protection activation threshold (&lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;under&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Boolean mzc;  /* Zero crossing measurement mode (&lt;i&gt;Mzc&lt;/i&gt;).  It is a type-dependent parameter.  true = WT protection system uses zero crossings to detect frequency (1 in the IEC model) false = WT protection system does not use zero crossings to detect frequency (0 in the IEC model). Default: false */
		CIMPP::Seconds tfma;  /* Time interval of moving average window (&lt;i&gt;TfMA&lt;/i&gt;) (&amp;gt;= 0).  It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uover;  /* Wind turbine over voltage protection activation threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;over&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU uunder;  /* Wind turbine under voltage protection activation threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;under&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */

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

	BaseClass* WindProtectionIEC_factory();
}
#endif
