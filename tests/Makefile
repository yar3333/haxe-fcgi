ifeq ($(shell getconf LONG_BIT),64)
        PLATFORM=Linux64
else
        PLATFORM=Linux
endif

export NEKOPATH:=../../library/ndll/$(PLATFORM):/usr/lib/neko:.
export CONTENT_TYPE:=urlencoded/formdata
export QUERY_STRING:=abc=123
export REMOTE_ADDR:=127.0.0.1
export REQUEST_METHOD:=GET
export REQUEST_URI:=test/a.html

neko_test:
	haxe -cp ../library -cp src -main Test -D HXFCGI -neko bin/test.n
	cd bin && neko test.n

neko_example:
	haxe -cp ../library -cp src -main Example -D HXFCGI -neko bin/example.n
	cd bin && neko example.n
