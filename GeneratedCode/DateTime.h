///////////////////////////////////////////////////////////
//  DateTime.h
//  Implementation of the Class DateTime
//  Created on:      27-Nov-2015 11:05:58
///////////////////////////////////////////////////////////

#if !defined(EA_5CF1966C_1974_44de_8640_491228A7204B__INCLUDED_)
#define EA_5CF1966C_1974_44de_8640_491228A7204B__INCLUDED_

/**
 * Date and time as "yyyy-mm-ddThh:mm:ss.sss", which conforms with ISO 8601. UTC
 * time zone is specified as "yyyy-mm-ddThh:mm:ss.sssZ". A local timezone relative
 * UTC is specified as "yyyy-mm-ddThh:mm:ss.sss-hh:mm". The second component
 * (shown here as "ss.sss") could have any number of digits in its fractional part
 * to allow any kind of precision beyond seconds.
 */
class DateTime
{

public:
	DateTime();

};
#endif // !defined(EA_5CF1966C_1974_44de_8640_491228A7204B__INCLUDED_)
