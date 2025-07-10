#ifndef WindPlantFreqPcontrolIEC_H
#define WindPlantFreqPcontrolIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/** \brief Frequency and active power controller model.  Reference: IEC Standard 61400-27-1 Annex E. */
	class WindPlantFreqPcontrolIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantFreqPcontrolIEC();
		~WindPlantFreqPcontrolIEC() override;

		/** \brief The frequency and active power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind plant model with which this wind plant frequency and active power control is associated. Default: 0 */
		CIMPP::WindPlantIEC* WindPlantIEC;

		/** \brief Maximum ramp rate of  request from the plant controller to the wind turbines (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dprefmax;

		/** \brief Minimum (negative) ramp rate of  request from the plant controller to the wind turbines (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dprefmin;

		/** \brief Plant P controller integral gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kiwpp;

		/** \brief Plant P controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kpwpp;

		/** \brief Maximum  request from the plant controller to the wind turbines (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU prefmax;

		/** \brief Minimum  request from the plant controller to the wind turbines (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU prefmin;

		/** \brief Lead time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpft;

		/** \brief Lag time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfv;

		/** \brief Filter time constant for frequency measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twpffilt;

		/** \brief Filter time constant for active power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twppfilt;

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

	BaseClass* WindPlantFreqPcontrolIEC_factory();
}
#endif
