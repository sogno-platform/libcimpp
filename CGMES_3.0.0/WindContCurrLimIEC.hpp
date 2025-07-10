#ifndef WindContCurrLimIEC_H
#define WindContCurrLimIEC_H
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
	class WindTurbineType3or4IEC;

	/** \brief Current limitation model.  The current limitation model combines the physical limits and the control limits. Reference: IEC 61400-27-1:2015, 5.6.5.8. */
	class WindContCurrLimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContCurrLimIEC();
		~WindContCurrLimIEC() override;

		/** \brief The wind dynamics lookup table associated with this current control limitation model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 3 or type 4 model with which this wind control current limitation model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum continuous current at the wind turbine terminals (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU imax;

		/** \brief Maximum current during voltage dip at the wind turbine terminals (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;maxdip&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU imaxdip;

		/** \brief Partial derivative of reactive current limit (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pqu&lt;/sub&gt;&lt;/i&gt;) versus voltage. It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpqu;

		/** \brief Limitation of type 3 stator current (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DFSLim&lt;/sub&gt;&lt;/i&gt;). &lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DFSLim&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;= 1 for wind turbines type 4. It is a type-dependent parameter. false= total current limitation (0 in the IEC model) true=stator current limitation (1 in the IEC model). Default: false */
		CIMPP::Boolean mdfslim;

		/** \brief Prioritisation of Q control during UVRT (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qpri&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. true = reactive power priority (1 in the IEC model) false = active power priority (0 in the IEC model). Default: false */
		CIMPP::Boolean mqpri;

		/** \brief Voltage measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltcl&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltcl;

		/** \brief Wind turbine voltage in the operation point where zero reactive current can be delivered (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pqumax&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU upqumax;

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

	BaseClass* WindContCurrLimIEC_factory();
}
#endif
