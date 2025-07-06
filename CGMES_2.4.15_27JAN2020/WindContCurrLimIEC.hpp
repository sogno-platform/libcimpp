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

	/** \brief Current limitation model.  The current limitation model combines the physical limits.  Reference: IEC Standard 61400-27-1 Section 6.6.5.7. */
	class WindContCurrLimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContCurrLimIEC();
		~WindContCurrLimIEC() override;

		/** \brief The current control limitation model with which this wind dynamics lookup table is associated. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 3 or 4 model with which this wind control current limitation model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum continuous current at the wind turbine terminals (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU imax;

		/** \brief Maximum current during voltage dip at the wind turbine terminals (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU imaxdip;

		/** \brief Limitation of type 3 stator current  ():  - false=0: total current limitation,  - true=1: stator current limitation).  It is type dependent parameter. Default: false */
		CIMPP::Boolean mdfslim;

		/** \brief Prioritisation of q control during LVRT (): - true = 1: reactive power priority, - false = 0: active power priority.  It is project dependent parameter. Default: false */
		CIMPP::Boolean mqpri;

		/** \brief Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tufilt;

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
