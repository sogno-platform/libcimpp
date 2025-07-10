#ifndef MeasurementValue_H
#define MeasurementValue_H
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
#include "DateTime.hpp"
#include "PerCent.hpp"

namespace CIMPP
{
	class MeasurementValueQuality;
	class MeasurementValueSource;

	/** \brief The current state for a measurement. A state value is an instance of a measurement from a specific source. Measurements can be associated with many state values, each representing a different source for the measurement. */
	class MeasurementValue : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		MeasurementValue();
		~MeasurementValue() override;

		/** \brief A MeasurementValue has a MeasurementValueQuality associated with it. Default: 0 */
		CIMPP::MeasurementValueQuality* MeasurementValueQuality;

		/** \brief The MeasurementValues updated by the source. Default: 0 */
		CIMPP::MeasurementValueSource* MeasurementValueSource;

		/** \brief The limit, expressed as a percentage of the sensor maximum, that errors will not exceed when the sensor is used under  reference conditions. Default: nullptr */
		CIMPP::PerCent sensorAccuracy;

		/** \brief The time when the value was last updated Default: '' */
		CIMPP::DateTime timeStamp;

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

	BaseClass* MeasurementValue_factory();
}
#endif
