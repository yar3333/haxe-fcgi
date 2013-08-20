#ifndef HXFCGI_BASICDATA
#define HXFCGI_BASICDATA

#include <string>
#include <list>

using namespace std;

namespace hxfcgi
{
	class BasicData
	{
		private:
			string formatHeader(string h);
		
		public:
			char* getClientIP();
			string getURI();
			list<string> getAllHeaders();
			string getHeader(string key);
			char* getMethod();
	};
}

#endif
