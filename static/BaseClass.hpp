#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#ifndef CGMES_BUILD
#define CGMES_BUILD
#endif

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

class BaseClass;
typedef bool (*class_get_function)(const BaseClass*, std::list<const BaseClass*>&);
typedef bool (*get_function)(const BaseClass*, std::stringstream&);

class BaseClass
{
	std::string rdfid;
public:
	virtual ~BaseClass();

	void setRdfid(const std::string& id) { rdfid = id; }
	std::string getRdfid() const { return rdfid; }

	static const char debugName[];
	virtual const char* debugString() const;

	virtual std::list<CGMESProfile> getPossibleProfilesForClass() const;
	virtual std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const;

	static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
	static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
	static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
	virtual void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const;
	virtual void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const;
	virtual void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const;
	static const CIMPP::BaseClassDefiner declare();
};
#endif // BASECLASS_HPP
