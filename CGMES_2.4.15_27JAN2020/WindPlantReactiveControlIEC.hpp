#ifndef WindPlantReactiveControlIEC_H
#define WindPlantReactiveControlIEC_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindPlantIEC;

	/** \brief Simplified plant voltage and reactive power control model for use with type 3 and type 4 wind turbine models.  Reference: IEC Standard 61400-27-1 Annex E. */
	class WindPlantReactiveControlIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantReactiveControlIEC();
		~WindPlantReactiveControlIEC() override;

		/** \brief Wind plant model with which this wind reactive control is associated. Default: 0 */
		CIMPP::WindPlantIEC* WindPlantIEC;

		/** \brief Plant Q controller integral gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kiwpx;

		/** \brief Plant Q controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kpwpx;

		/** \brief Plant voltage control droop (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU kwpqu;

		/** \brief Power factor control modes selector (). Used only if mwpu is set to false. true = 1: power factor control false = 0: reactive power control. It is project dependent parameter. Default: false */
		CIMPP::Boolean mwppf;

		/** \brief Reactive power control modes selector (). true = 1: voltage control false = 0: reactive power control. It is project dependent parameter. Default: false */
		CIMPP::Boolean mwpu;

		/** \brief Filter time constant for active power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twppfilt;

		/** \brief Filter time constant for reactive power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twpqfilt;

		/** \brief Filter time constant for voltage measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twpufilt;

		/** \brief Lead time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds txft;

		/** \brief Lag time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds txfv;

		/** \brief Voltage threshold for LVRT detection in q control (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU uwpqdip;

		/** \brief Maximum  ( or delta ) request from the plant controller (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU xrefmax;

		/** \brief Minimum  ( or delta) request from the plant controller (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU xrefmin;

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

	BaseClass* WindPlantReactiveControlIEC_factory();
}
#endif
