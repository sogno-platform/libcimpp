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
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindTurbineType1or2IEC;
	class WindTurbineType3or4IEC;

	/** \brief The grid protection model includes protection against over- and under-voltage, and against over- and under-frequency. Reference: IEC 61400-27-1:2015, 5.6.6. */
	class WindProtectionIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindProtectionIEC();
		~WindProtectionIEC() override;

		/** \brief The wind dynamics lookup table associated with this grid protection model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind generator type 1 or type 2 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;

		/** \brief Wind generator type 3 or type 4 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum rate of change of frequency (&lt;i&gt;dF&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dfimax;

		/** \brief Wind turbine over frequency protection activation threshold (&lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;over&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU fover;

		/** \brief Wind turbine under frequency protection activation threshold (&lt;i&gt;f&lt;/i&gt;&lt;i&gt;&lt;sub&gt;under&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU funder;

		/** \brief Zero crossing measurement mode (&lt;i&gt;Mzc&lt;/i&gt;).  It is a type-dependent parameter.  true = WT protection system uses zero crossings to detect frequency (1 in the IEC model) false = WT protection system does not use zero crossings to detect frequency (0 in the IEC model). Default: false */
		CIMPP::Boolean mzc;

		/** \brief Time interval of moving average window (&lt;i&gt;TfMA&lt;/i&gt;) (&amp;gt;= 0).  It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tfma;

		/** \brief Wind turbine over voltage protection activation threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;over&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU uover;

		/** \brief Wind turbine under voltage protection activation threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;under&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU uunder;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* WindProtectionIEC_factory();
}
#endif
