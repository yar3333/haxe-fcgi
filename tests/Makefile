include Makefile.platform
include Makefile.test

HAXE_COMPILER_OPTIONS=-D HXFCGI

export NEKOPATH:=../../library/ndll/$(PLATFORM):/usr/lib/neko:.
export CONTENT_TYPE:=urlencoded/formdata
export QUERY_STRING:=abc=123
export REMOTE_ADDR:=127.0.0.1
export REQUEST_METHOD:=GET
export REQUEST_URI:=test/a.html

MAIN:=Test