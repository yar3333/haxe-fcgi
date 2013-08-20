#ifndef HXFCGI_REQUEST
#define HXFCGI_REQUEST

#include <map>
#include <string>
#include <neko.h>

using namespace std;

namespace hxfcgi
{
	class Request 
	{
		private:
			map<string,string> header;
			bool header_sent;
			bool post_fetched;
			string postData;
			string codeToHeader(int r);	
		
		public:
			Request();
			bool headerSent();
			void printHeaders();
			void addHeader(string type,string value);
			void pchar(char c);
			void log(string msg);
			void flush();
			void setReturnCode(int code);
			string getPostData();
			void bufferFill(buffer buf,int *len);
			void bufferFill(char *buf,int *len);
	};
}

#endif
