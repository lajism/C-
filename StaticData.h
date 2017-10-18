


#if !defined(_STATICDATA_H)
#define _STATICDATA_H

#using <mscorlib.dll>

class StaticData {
public:
	StaticData* sharedStaticData();
	StaticData::bool init();
	void stringFromKey(std::string Key);
	int intFromKey(std::string Key);
	int floatFromKey(std::string Key);
	bool booleanFromKey(std::string Key);
	cocos2d::CCPoint pointFromKey(std::string Key);
	cocos2d::CCRect rectFromKey(std::string Key);
	cocos2d::CCSize sizeFromKey(std::string Key);
	void purge();
protected:
	cocos2d::CCDictionary _dictionary;
	std::string _staticFileName;
private:
	StaticData();
	~StaticData();
};

#endif  //_STATICDATA_H
