#ifndef HXFCGI_DATA
#define HXFCGI_DATA

#include <map>
#include <string>
#include "request.h"

using namespace std;

#define BUFSIZE 1024

namespace hxfcgi
{
	class Data
	{
		private:
			int getPostLength();
			string getCompleteQueryString(string post, string get);
			string parseKey(string data);
			string parseValue(string data);
		
		public:
			string getPostData();
			string getParamsString();
			map<string,string> getParams(Request *req);
			int getStdinData(char* buf, int len);
	};	
}

#endif
